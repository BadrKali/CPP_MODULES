/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:26:47 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/06 15:48:30 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include<iomanip>
#include<iostream>
#include<sstream>


PhoneBook::PhoneBook() {
	//CONSTRUCTOR
	index = 0;
}

PhoneBook::~PhoneBook() {
	//DESTRUCTOR
}

void PhoneBook::printSingleContact(int i) {
	std::cout <<"FIRST NAME : "<< (*this).contacts[i].getFirstName() << std::endl;
	std::cout <<"LAST NAME : "<< (*this).contacts[i].getLastName() << std::endl;
	std::cout <<"NICK NAME : "<< (*this).contacts[i].getNickName() << std::endl;
	std::cout <<"PHONE NUMBER : "<< (*this).contacts[i].getPhoneNumber() << std::endl;
	std::cout <<"DARKEST SECRET : "<< (*this).contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::setContact() {
	
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int clean = 0;

	std::cout << "First Name : ";
	std::getline(std::cin, firstName);
	if(std::cin.eof()) exit(1);
	clean += (*this).contacts[index].checkInput(firstName,0);
	std::cout << "Last Name : ";
	std::getline(std::cin, lastName);
	if(std::cin.eof()) exit(1);
	clean += (*this).contacts[index].checkInput(lastName,0);
	std::cout << "Nick Name : ";
	std::getline(std::cin, nickName);
	if(std::cin.eof()) exit(1);
	clean += (*this).contacts[index].checkInput(nickName,0);
	std::cout << "Phone Number : ";
	std::getline(std::cin, phoneNumber);
	if(std::cin.eof()) exit(1);
	clean += (*this).contacts[index].checkInput(phoneNumber,1);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, darkestSecret);
	if(std::cin.eof()) exit(1);
	clean += (*this).contacts[index].checkInput(darkestSecret,0);
	if(clean == 0)
	{
		(*this).contacts[index].setFirstName(firstName);
		(*this).contacts[index].setLastName(lastName);
		(*this).contacts[index].setNickName(nickName);
		(*this).contacts[index].setPhoneNumber(phoneNumber);
		(*this).contacts[index].setDarkestSecret(darkestSecret);
		index++;
	}
	if(index > 7)
		index = 0;
}

void PhoneBook::searchContacts() {
	std::string input;
	int inputo;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "firstName";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "lastName";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickName";
	std::cout << "|";
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if((*this).contacts[0].getFirstName().empty()) {
		std::cout << std::endl;
		std::cout << "contacts list is empty pleas add some contacts" << std::endl;
		std::cout << std::endl;
		return;
	}
	for(int i = 0; i <= 7; i++) {
		if(!(*this).contacts[i].getFirstName().empty())
		{
			std::cout << "|";
			std::cout << std::right << std::setw(10) << i;
			std::cout << "|";
			(((*this).contacts[i].getFirstName().length() <= 10 ) ? (std::cout << std::right << std::setw(10) << (*this).contacts[i].getFirstName()) : std::cout << std::right << std::setw(9) << (*this).contacts[i].getFirstName().substr(0,9) << '.');
			std::cout << "|";
			(((*this).contacts[i].getLastName().length() <= 10 ) ? (std::cout << std::right << std::setw(10) << (*this).contacts[i].getLastName()) : std::cout << std::right << std::setw(9) << (*this).contacts[i].getLastName().substr(0,9) << '.');
			std::cout << "|";
			(((*this).contacts[i].getNickName().length() <= 10 ) ? (std::cout << std::right << std::setw(10) << (*this).contacts[i].getNickName()) : std::cout<< std::right << std::setw(9) << (*this).contacts[i].getNickName().substr(0,9) << '.');
			std::cout << "|";
			std::cout << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
		}
		else
			break;
	}
	while(1) {
		std::cout << "SEARCH INDEX : " ;
		std::getline(std::cin, input);
		std::istringstream stream(input);
		stream >> inputo;
		if(std::cin.eof())
			exit(1);
		if(!stream.fail() && (*this).contacts[0].checkInput(input, 1) != 1)
		{
			if(inputo < 0 || inputo > 7)
				std::cout << "pleas provide a valid index" << std::endl;
			else if(!(*this).contacts[inputo].getFirstName().empty()){
				printSingleContact(inputo);
				break;
			}
		}
		else
		{
			std::cout << "pleas provide a valid index" << std::endl;
			stream.clear();
		}
	}
}

