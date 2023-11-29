/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:11 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 12:23:33 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
        this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

static bool isPhoneNumber(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        char c = *it;
        if (!std::isdigit(c) && c != ' ' && c != '-' && c != '(' && c != ')')
            return false;
        
    }
    return true;
}

static bool isChar(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!isalpha(static_cast<unsigned char>(*it)))
            return false;
    }
    return true;
}

static int AddInput(std::string &input)
{
    while (1)
    {
        
        if (!getline(std::cin, input))
            return EXIT_FAILURE;

        size_t start = input.find_first_not_of(" \t");
        size_t end = input.find_last_not_of(" \t");

        if (start == std::string::npos)
            input.clear();
        else
            input = input.substr(start, (end - start + 1));

        if (input.empty() || !isChar(input))
        {
            std::cout << RED << "Try again,more then one name or non-letter characters or umlauts like ä, ö ü are not accepted" << RESET << std::endl;
            std::cout << ">>";
        }
        else
        {
            return EXIT_SUCCESS;
        }
    }
}

static int AddPhoneNumberInput(std::string &phoneNumber)
{
    while (true)
    {
        if (!getline(std::cin, phoneNumber))
            return EXIT_FAILURE;

        size_t start = phoneNumber.find_first_not_of(" \t");
        size_t end = phoneNumber.find_last_not_of(" \t");
        if (start == std::string::npos)
            phoneNumber.clear();
        else
            phoneNumber = phoneNumber.substr(start, (end - start + 1));

        if (phoneNumber.empty() || !isPhoneNumber(phoneNumber))
        {
            std::cout << RED << "Invalid phone number. Please try again. (000-333-999)" << RESET << std::endl;
            std::cout << ">>";
        }
        else if(phoneNumber.length() < 10 || phoneNumber.length() > 15)
        {
            std::cout << RED << "Inavlid phonen number, should be between 10 and 15 number long (000-333-999)" << RESET << std::endl;
            std::cout << ">>";
        }
        else
        {
            return EXIT_SUCCESS;
        }
    }
}

static int AddDarkestSecretInput(std::string &input)
{
    while (1)
    {
        
        if (!getline(std::cin, input))
            return EXIT_FAILURE;
        if (input.empty())
        {
            std::cout << RED << "Try again, and tell us your secret" << RESET << std::endl;
            std::cout << ">>";
        }
        else
        {
            return EXIT_SUCCESS;
        }
    }
}

int  PhoneBook::add_new()
{
    Contact newContact;
    std::string input;
    
    std::cout << "First Name: ";
    if(AddInput(input))
        return EXIT_FAILURE;
    newContact.setFirstname(input);

    std::cout << "Last Name: ";
    if(AddInput(input))
        return EXIT_FAILURE;
    newContact.setLastname(input);
    
    std::cout << "Nickname: ";
    if(AddInput(input))
        return EXIT_FAILURE;
    newContact.setNickname(input);

    std::cout << "Phone number: ";
    if(AddPhoneNumberInput(input))
        return EXIT_FAILURE;
    newContact.setPhonenumber(input);

    std::cout << "Darkest Secret: ";
    if(AddDarkestSecretInput(input))
        return EXIT_FAILURE;
    newContact.setDarkestsecret(input); 

    this->p_contacts[this->index] = newContact;
    this->index = (this->index + 1) % 8;
    return EXIT_SUCCESS;
}

std::string truncateString(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

int PhoneBook::search() const
{
   if (index == 0)
    {
        return EXIT_FAILURE;
    }

    std::string input;
    int selected_index;


    std::cout << std::right << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << truncateString(p_contacts[i].get_Firstname())
                  << "|" << std::setw(10) << truncateString(p_contacts[i].get_Lastname())
                  << "|" << std::setw(10) << truncateString(p_contacts[i].get_Nickname()) << std::endl;
    }
    bool validInput = false;
    while(!validInput)
    {
        std::cout << BLUE << "Enter the index of the contact to display: " << RESET;
        std::string input;
        getline(std::cin, input);
        
        std::istringstream iss(input);
        if (!(iss >> selected_index))
        {
            std::cout << RED << "Invalid input. Integer." << RESET << std::endl;
            continue;
        }
        if (selected_index > 8 || selected_index < 0 )
        {
            std::cout << RED << "Input is greater than 7. Please enter a index between 0 and 7." << RESET << std::endl;
            continue;
        }
        validInput = true;
    }
    if (selected_index >= 0 && selected_index < 8)
    {
        std::cout << "First Name: " << p_contacts[selected_index].get_Firstname() << std::endl;
        std::cout << "Last Name: " << p_contacts[selected_index].get_Lastname() << std::endl;
        std::cout << "Nickname: " << p_contacts[selected_index].get_Nickname() << std::endl;
        std::cout << "Phone Number: " << p_contacts[selected_index].get_Phonenumber() << std::endl;
        std::cout << "Darkest Secret: " << p_contacts[selected_index].get_Darkestsecret() << std::endl;
    }
    return EXIT_SUCCESS;
}
