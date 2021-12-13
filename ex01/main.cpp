/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:37 by calle             #+#    #+#             */
/*   Updated: 2021/12/13 11:35:40 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <stdlib.h>

static void	welcome_prompt( void )
{
	std::cout << "Welcome. This is a phonebook." << std::endl; 
	std::cout << "Use the following commands:" << std::endl; 
	std::cout << "ADD | SEARCH | EXIT" << std::endl; 
}

int main(void)
{
	std::string	input;
	Phonebook	phonebook;

	welcome_prompt();
    while (1 && (!std::cin.eof() || !std::cin.fail()))
    {
		std::cin.clear();
		std::cin >> input; 
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "See you around ! Bye." << std::endl;
			break ;
		}
		else
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		input.clear();
    }
	if (std::cin.eof())
	{
		std::cin.clear();
		std::cout << "Closing.." << std::endl;
		return (EXIT_SUCCESS);
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cerr << "ERROR" << std::endl;
		return (EXIT_FAILURE);
	}
    return (EXIT_SUCCESS);
}
