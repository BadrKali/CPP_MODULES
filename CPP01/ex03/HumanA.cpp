/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:29 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:35:31 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
	std::cout << name << " attacks with thier " << weapon.getType() << std::endl;
}
