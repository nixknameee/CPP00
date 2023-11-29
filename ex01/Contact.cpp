/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:14 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 12:29:53 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() 
{
}
Contact::~Contact()
{
}

void    Contact::setFirstname(std::string first_name)
{
    this->firstname = first_name;
}

void    Contact::setLastname(std::string last_name)
{
    this->lastname = last_name;
}

void    Contact::setNickname(std::string nick_name)
{
    this->nickname = nick_name;
}

void    Contact::setPhonenumber(std::string phone_number)
{
    this->phonenumber = phone_number;
}

void    Contact::setDarkestsecret(std::string darkest_secret)
{
    this->darkestsecret = darkest_secret;
}


std::string Contact::get_Firstname(void) const
{
    return(this->firstname);
}

std::string Contact::get_Lastname(void) const
{
    return(this->lastname);
}

std::string Contact::get_Nickname(void) const
{
    return(this->nickname);
}

std::string Contact::get_Phonenumber(void) const
{
    return(this->phonenumber);
}

std::string Contact::get_Darkestsecret(void) const
{
    return(this->darkestsecret);
}
