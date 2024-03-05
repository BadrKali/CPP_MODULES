/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:30:25 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:56:22 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor" << std::endl;
	(*this).type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Default Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	(*this) = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if(&other == this)
		return(*this);
	(*this).type = other.type;
	return(*this);
}

std::string WrongAnimal::getType() const {
	return((*this).type);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound" << std::endl;
}