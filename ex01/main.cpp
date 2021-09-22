/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:37 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:16:13 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

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
	if (std::cin.fail() || std::cin.eof())
	{
		std::cin.clear();
		std::cout << "ERROR" << std::endl;
	}
    return (0);
}
