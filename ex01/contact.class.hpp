/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:54:52 by calle             #+#    #+#             */
/*   Updated: 2021/09/10 15:02:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string>

class Contact {

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_secret;

		void		_collect_contact_info(std::string field, std::string *field_value);
		
	public:

		Contact( void );
		~Contact( void );
		void	addContact( int _contact_id );
};

#endif
