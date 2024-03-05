/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:26:54 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/06 15:44:13 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void setContact(void);
		void searchContacts(void);
		void printSingleContact(int i);
	private:
		Contact contacts[8];
		int index;
};


#endif