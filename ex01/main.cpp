/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:07:34 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 12:29:40 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>
#include <cstdlib>
#include <unistd.h>



int main()
{  
  PhoneBook phonebook;
  std::string input;
  std::cout << "Use one of the following Commands" << std::endl;
  std::cout << "ADD, SEARCH, EXIT" << std::endl;
  std::cout << ">>";
  while (getline(std::cin, input))
  {
    if (input == "ADD")
    {
      if(phonebook.add_new())
      {
        std::cout << RED << "start program again, program failed to add new contact" << RESET << std::endl;
        return EXIT_FAILURE;
      }
      std::cout << GREEN << REVERSED << "You successfully add a new Contact\n" << RESET << std::endl;
      sleep(2);
    }
    else if(input == "SEARCH")
    {
      if(phonebook.search()) 
      {
        std::cout << RED << UNDERLINE << "[Search failed. Please add a contact first or check your input.]" << RESET << std::endl;
      }
    }
    else if(input == "EXIT")
      break;
    else 
      std::cout << BLUE << UNDERLINE << "Invalid Input, try again!\n" << RESET << std::endl;
        std::cout << RED << "Please enter ADD, SEARCH or EXIT" << RESET << std::endl;
        std::cout << ">>";
    }   
}
