/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:32:33 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/19 10:32:36 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"


ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	(*this).hitPoints = 100;
	(*this).energyPoints = 50;
	(*this).attackDamage = 20;
}

ClapTrap::ClapTrap(std::string& name) {
	std::cout << "ClapTrap Constructor Called" << std::endl;
	(*this).name = name;
	(*this).hitPoints = 100;
	(*this).energyPoints = 50;
	(*this).attackDamage = 20;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Default Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	(*this).name = (*this).name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	(*this).name = other.name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
	return(*this);
}

void ClapTrap::attack(const std::string& target) {
	if((*this).hitPoints > 0 && (*this).energyPoints > 0) {
		std::cout << "ClapTrap " << (*this).name << " attacks " << target << " causing " << (*this).attackDamage << " points of damage" << std::endl;
		(*this).energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << (*this).name << " i am good for nothing !!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if((*this).hitPoints > 0 && (*this).energyPoints > 0) {
		std::cout << "ClapTrap " << (*this).name << " is getting Damaged" << std::endl;
		(*this).hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << (*this).name << " i am a dead body right now" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if((*this).hitPoints > 0 && (*this).energyPoints > 0) {
		std::cout << "ClapTrap " << (*this).name << " getting repaired right now" << std::endl;
		(*this).energyPoints -= 1;
		(*this).hitPoints += amount;
	}
	else 
		std::cout << (*this).name << " can't be repaired right now !!!" << std::endl;
}
