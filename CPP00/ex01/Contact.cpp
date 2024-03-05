/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:26:05 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/06 09:59:00 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"
#include<iostream>

Contact::Contact() {
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact() {

}

int Contact::checkInput(std::string input, int type) {
	bool spaces = true;
	if(type == 0)
	{
		for(std::size_t i = 0; i < input.length();i++)
		{
			if(!std::isspace(input[i]))
			{
				spaces = false;
				break;
			}
		}
		if(spaces == false)
		{
			std::size_t found = input.find_first_not_of("qwertyuiopasdfghjklmnbvcxzQWERTYUIOPLKJHGFDSAZXCVBNM ");
			if(found != std::string::npos) 
				return(1);
			if(!input.empty())
				return(0);
		}
		return(1);
	}
	else if(type == 1)
	{
		std::size_t found = input.find_first_not_of("0123456789");
		if(found != std::string::npos)
			return(1);
		if(!input.empty())
			return(0);
		return(1);
	}
	return(0);
}


void Contact::setFirstName(std::string firstName) {
	(*this).firstName = firstName;
}
void Contact::setLastName(std::string lastName) {
	(*this).lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	(*this).nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	(*this).phoneNumber = phoneNumber;
}


void Contact::setDarkestSecret(std::string darkestSecret) {
	(*this).darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) {
	return((*this).firstName);
}

//SETTERS

std::string Contact::getLastName(void) {
	return((*this).lastName);
}

std::string Contact::getNickName(void) {
	return((*this).nickName);
}

std::string Contact::getPhoneNumber(void) {
	return((*this).phoneNumber);
}

std::string Contact::getDarkestSecret(void) {
	return((*this).darkestSecret);
}