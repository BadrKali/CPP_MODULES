/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:08 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:10 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"


Weapon::Weapon(std::string type) {
	setType(type);
}

Weapon::~Weapon() {
    //DESTRUCTOR
}

void Weapon::setType(std::string type) {
	(*this).type = type;
}

const std::string& Weapon::getType(void) {
	return(type);
}
