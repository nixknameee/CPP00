/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <ngjokaj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:22:50 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/23 11:13:58 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        //std:cout if argc < 2
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        std::string inputStr = argv[i]; // creates a string with arguments
        for (size_t j = 0; j < inputStr.length(); j++) // loops through the string
        {
            char character = inputStr[j];
            char upperCaseCharacter = static_cast<char>(std::toupper(character)); // convert the current char to upper
            std::cout << upperCaseCharacter;
        }
        if (i < argc - 1) // Add a space if not the last argument
        {
            std::cout << ' ';
        }
    }
    std::cout << '\n';
    return 0;
}