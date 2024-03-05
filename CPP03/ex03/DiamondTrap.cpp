/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:06:24 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:06:25 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"DiamondTrap.hpp"


DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default Constractor Called" << std::endl;
	(*this).hitPoints = 100;
	(*this).energyPoints = 50;
	(*this).attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string& name) {
	(*this).name = name;
	(*this).hitPoints = 100;
	(*this).energyPoints = 50;
	(*this).attackDamage = 30;
	ClapTrap::name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	(*this).name = other.name;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
	(*this).hitPoints = other.hitPoints;
	(*this).ClapTrap::name = other.ClapTrap::name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	(*this).name = other.name;
	(*this).energyPoints = other.energyPoints;
	(*this).attackDamage = other.attackDamage;
	(*this).hitPoints = other.hitPoints;
	(*this).ClapTrap::name = other.ClapTrap::name;
	return(*this);
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name is : " << (*this).name << std::endl;
	std::cout << "ClapTrap Name is : " << ClapTrap::name << std::endl;
}
