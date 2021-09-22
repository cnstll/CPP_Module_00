/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:28:59 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:16:29 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>

class Phonebook {

	private:

		Contact _contact[8];
		int		_nb_of_contacts;

		void	_display_all_contacts(int nb_of_contacts);	
		void	_index_look_up(int nb_of_contacts);
		int		_input_is_valid(std::string  input);

	public:

		Phonebook( );
		~Phonebook( );
		void	addContact();
		void	searchContact();
};

#endif
