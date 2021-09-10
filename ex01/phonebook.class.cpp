/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:04:09 by calle             #+#    #+#             */
/*   Updated: 2021/09/10 13:35:07 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook( void )
{
	this->_current_nb_of_contacts = 0;
}

Phonebook::~Phonebook( void )
{
}

void	Phonebook::addContact()
{
	std::cout << "Add a contact to the Phonebook: " << std::endl;
	this->_contact[_current_nb_of_contacts].add_contact(_current_nb_of_contacts);
}


void	Phonebook::searchContact()
{
	std::cout << this->_current_nb_of_contacts << " contacts were registered: " << std::endl;
}
