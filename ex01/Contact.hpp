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
#include <iomanip>
#include <string>
#include <limits>

class Contact {

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_secret;

		int			_index;

		void	_collect_contact_info(std::string field, std::string *field_value);
		void	_short_display(std::string to_display);
		void	_full_display(std::string field, std::string to_display);
		
	public:

		Contact( void );
		~Contact( void );
		void	add_contact(int contact_id);
		void	display_short_contact();	
		void	display_full_contact();	
};

#endif
