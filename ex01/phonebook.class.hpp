/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:28:59 by calle             #+#    #+#             */
/*   Updated: 2021/09/10 13:35:20 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <string>
#include "contact.class.hpp"

class Phonebook {

	private:

		Contact _contact[8];
		int		_current_nb_of_contacts;

	public:

		Phonebook( );
		~Phonebook( );
		void	addContact();
		void	searchContact();
};

#endif
