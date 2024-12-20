/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:53 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/14 09:54:56 by bel-kala         ###   ########.fr       */
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
	std::cout << "** DEBUG **" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "** INFO **" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "** WARNING **" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "** ERROR **" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*ptr[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	int i = 0;
	int index = -1;
	std::string str[4] = {"debug","info","warning","error"};
	while(i < 4) { 
		if(level == str[i])
			index = i;
		i++;
	}
	(this->*ptr[index])();
}