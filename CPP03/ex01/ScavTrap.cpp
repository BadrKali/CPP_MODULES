/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:04:04 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:04:08 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	(*this).name = other.name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
}

ScavTrap::ScavTrap(std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << (*this).name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	(*this).name = other.name;
	(*this).hitPoints = other.hitPoints;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
	return(*this);
}

void ScavTrap::attack(const std::string& target) {
	if((*this).hitPoints > 0 && (*this).energyPoints > 0) {
		std::cout << "ScavTrap " << (*this).name << " attacks " << target << " causing " << (*this).attackDamage << " points of damage" << std::endl;
		(*this).energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << (*this).name << " i am good for nothing !!!!" << std::endl;
}
