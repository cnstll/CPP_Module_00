/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:34:16 by calle             #+#    #+#             */
/*   Updated: 2021/09/10 15:02:25 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact( void ) 
{
	_first_name = "";
	_last_name = "";
	_nick_name = "";
	_phone_number = "";
	_secret = "";
}

Contact::~Contact( void )
{
	return ;
}

void	Contact::_collect_contact_info(std::string field, std::string *field_value)
{
	std::cout << field;
	string::getline(std::cin >> *(field_value));
}

void	Contact::addContact( int _contact_id)
{
	if (_contact_id < 8)
		;
	_collect_contact_info("First Name: ", &_first_name);
	_collect_contact_info("Last Name: ", &_last_name);
	_collect_contact_info("Nickname: ", &_nick_name);
	_collect_contact_info("Phone Number: ", &_phone_number);
	_collect_contact_info("Darkest Secret: ", &_secret);
	//std::cout << _first_name << std::endl;
	//std::cout << _contact_id << std::endl;
}
