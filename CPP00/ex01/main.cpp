/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:25:56 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/06 15:48:33 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"PhoneBook.hpp"


int main() {

	PhoneBook phonebook;
	std::string input;

	std::cout << "Welcome to My Awesome PhoneBook, feels like the 80s right !!!" << std::endl;
	std::cout << std::endl;
	while(1) {
		std::cout << "COMMANDS (ADD, SEARCH, EXIT) > ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			break;
		else if(!input.empty()) {
			if(input == "ADD")
				phonebook.setContact();
			else if(input == "SEARCH")
				phonebook.searchContacts();
			else if(input == "EXIT")
				exit(0);
		}
	}
	return(0);
}