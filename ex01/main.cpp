/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:37 by calle             #+#    #+#             */
/*   Updated: 2021/09/09 18:40:02 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.class.hpp"

int main(void)
{
	std::string	input;

	std::cout << "Hi. This is a phonebook." << std::endl; 
	std::cout << "Use the following commands:" << std::endl; 
	std::cout << "ADD | SEARCH | EXIT" << std::endl; 
    while (1 && (!std::cin.eof() || !std::cin.fail()))
    {
		std::cin.clear();
		std::cin >> input; 
		if (input == "ADD")
			std::cout << "You typed ADD!" << std::endl;
		else if (input == "SEARCH")
			std::cout << "You typed SEARCH!" << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "See you around ! Bye." << std::endl;
			break ;
		}
		input.clear();
    }
	if (std::cin.fail() || std::cin.eof())
	{
		std::cin.clear();
		std::cout << "ERROR" << std::endl;
	}
    return (0);
}
