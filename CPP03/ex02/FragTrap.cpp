/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:32:25 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/19 10:32:29 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"FragTrap.hpp"


FragTrap::FragTrap() {
	//Default Constructor
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	(*this).hitPoints = 100;
	(*this).energyPoints = 100;
	(*this).attackDamage = 30;
}


FragTrap::~FragTrap() {
	//Default Destructor
	std::cout << "FragTrap Destructor Called" << std::endl;
}


FragTrap::FragTrap(std::string& name) {
	std::cout << "FragTrap Constructor Called" << std::endl; 
	(*this).name = name;
	(*this).hitPoints = 100;
	(*this).energyPoints = 100;
	(*this).attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	(*this).name = other.name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	(*this).name = other.name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
	return(*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Fragtrap : "<< (*this).name << " : hight Five " << std::endl;
}