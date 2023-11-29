/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:08 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 12:29:21 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define REVERSED "\033[7m"
#define HIDDEN "\033[8m"
#define RESET "\033[0m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"


#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cctype> 
#include "Contact.hpp"


class PhoneBook 
{
    private:
        Contact p_contacts[8];
        int index;
            
        
    public:
        PhoneBook();
        ~PhoneBook();
        int     add_new();
        int     search() const;
};


# endif
