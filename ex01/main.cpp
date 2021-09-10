/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:37 by calle             #+#    #+#             */
/*   Updated: 2021/09/10 15:02:30 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
/*#include "phonebook.class.hpp" */

static void	welcome_prompt( void )
{
	std::cout << "Welcome. This is a phonebook." << std::endl; 
	std::cout << "Use the following commands:" << std::endl; 
	std::cout << "ADD | SEARCH | EXIT" << std::endl; 
}

static void	init_phonebook(Contact phonebook[8])
{
	int	i;

	i = 0; 
	while (i < 8)
	{
		phonebook[i] = Contact();
		i++;
	}
}

int main(void)
{
	std::string	input;
	Contact		phonebook[8];
	int			contact_id;

	welcome_prompt();
	init_phonebook(phonebook);
	contact_id = 0;
    while (1 && (!std::cin.eof() || !std::cin.fail()))
    {
		std::cin.clear();
		std::cin >> input; 
		if (input == "ADD")
		{
			phonebook[contact_id].addContact(contact_id);
			contact_id++;
		}
		else if (input == "SEARCH")
			;
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
