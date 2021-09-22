/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:04:09 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:18:54 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void )
{
	this->_nb_of_contacts = 0;
}

Phonebook::~Phonebook( void )
{
}

void	Phonebook::addContact()
{
	if (_nb_of_contacts < 8)
	{
		std::cout << "Add a contact to the Phonebook: " << std::endl;
		_contact[_nb_of_contacts].add_contact(_nb_of_contacts);
		_nb_of_contacts++;
	}
	else
		std::cout << "Phonebook is full" << std::endl;
}

int		Phonebook::_input_is_valid(std::string	input)
{
	int	i;

	i = 0;
	while (input[i] && input[i] == ' ')
		i++;
	if (!my_isdigit(input[i]))
		return (0);
	else
	{
		if (input[i] < '0' || input[i] > '7')
			return (0);
		if (input[++i])
			return (0);
		return (1);
	}
}

void	Phonebook::_index_look_up(int nb_of_contacts)
{
	std::string	input;
	int			lookup_index;

	while (true)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> input;
		if(_input_is_valid(input))
		{
			str_to_int(&lookup_index, input.c_str());
			if (lookup_index < nb_of_contacts)
			{
				_contact[lookup_index].display_full_contact();
				break ;
			}
			else
				std::cout << "Index to High, enter a new one: " <<  std::endl;
		}
		else
			std::cout << "Invalid Index, enter a new one: " <<  std::endl;
	}
}

void	Phonebook::_display_all_contacts(  int nb_of_contacts)
{
	int	i;

	i = 0;
	while (i < nb_of_contacts)
	{
		_contact[i].display_short_contact();
		i++;
	}
}

void	Phonebook::searchContact()
{
	if (_nb_of_contacts > 0)
	{
		_display_all_contacts(_nb_of_contacts);
		std::cout << "Enter an index to look into a contact:" << std::endl;
		_index_look_up(_nb_of_contacts);
	}
	else
		std::cout << "No contact found. Add a contact." << std::endl;
}
