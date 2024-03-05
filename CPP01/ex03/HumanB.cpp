/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:42 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:35:44 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"


HumanB::HumanB(std::string name) : name(name) {
	
}

HumanB::~HumanB() {

}

void HumanB::attack() {
	std::cout << name << " attacks with thier " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	(*this).weapon = &weapon;
}