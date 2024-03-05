/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:37:14 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:37:15 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"



Harl::Harl() {
	//CONSTRUCTOR
}

Harl::~Harl() {
	//DESTRUCTOR
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*ptr[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	std::string lvl = "DEBUGINFOWARNINGERROR";
	int found = -1;
	if(level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
		found = lvl.find(level);
	switch(found) {
		case 0 :
			(this->*ptr[0])();
		case 5 :
			(this->*ptr[1])();
		case 9:
			(this->*ptr[2])();
		case 16:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
	}
}