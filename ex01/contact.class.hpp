/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:54:52 by calle             #+#    #+#             */
/*   Updated: 2021/09/09 18:37:08 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

class Contact {

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_number_of_contacts;
		std::string _all_contacts[8];
		
	public:

		Contact( void ) const;
		~Contact( void ) const;
}

#endif
