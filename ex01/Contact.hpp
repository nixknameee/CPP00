/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:17 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 12:29:26 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <sstream>
#include <iostream>




class Contact {
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    
public:
    Contact();
    ~Contact();
    
    
    void    setFirstname(std::string first_name);
    void    setLastname(std::string last_name);
    void    setNickname(std::string nick_name);
    void    setPhonenumber(std::string phone_number);
    void    setDarkestsecret(std::string darkest_secret);
    
    std::string get_Firstname(void) const;
    std::string get_Lastname(void) const;
    std::string get_Nickname(void) const;
    std::string get_Phonenumber(void) const;
    std::string get_Darkestsecret(void) const;
    

};


#endif
