/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:34:16 by calle             #+#    #+#             */
/*   Updated: 2021/09/15 14:18:19 by calle            ###   ########.fr       */
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
	std::getline(std::cin, *(field_value));
}

void	Contact::add_contact( int contact_id)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_collect_contact_info("First Name: ", &_first_name);
	_collect_contact_info("Last Name: ", &_last_name);
	_collect_contact_info("Nickname: ", &_nick_name);
	_collect_contact_info("Phone Number: ", &_phone_number);
	_collect_contact_info("Darkest Secret: ", &_secret);
	_index = contact_id;
}

void	Contact::_short_display(std::string to_display)
{
	const int	column_size = 10;

	if (to_display.length() > column_size)
	{
		std::cout << std::setw(column_size) << std::right 
		<< to_display.substr(0, 9).append(".", 0, 1);
	}
	else
	{
		std::cout << std::setw(column_size) << std::right 
		<< to_display;
	}
	std::cout << "|";
}

void	Contact::display_short_contact()
{
	std::cout << std::setw(10) << std::right << _index;
	std::cout << "|";
	_short_display(_first_name);
	_short_display(_last_name);
	_short_display(_nick_name);
	std::cout << std::endl;
}

void	Contact::_full_display(std::string field, std::string to_display)
{
	std::cout << field << to_display << std::endl;
}

void	Contact::display_full_contact()
{
	_full_display("First name: ", _first_name);
	_full_display("Last name: ", _last_name);
	_full_display("Nickname: ", _nick_name);
	_full_display("Phone number: ", _phone_number);
	_full_display("Darkest secret: ", _secret);
}
