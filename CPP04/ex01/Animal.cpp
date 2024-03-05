/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:29:38 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:55:59 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Animal.hpp"



Animal::Animal() {
	std::cout << "Animal Default Constructor Called" << std::endl;
	(*this).type = "Animal";
}

Animal::~Animal() {
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Animal::Animal(const Animal& other) {
	(*this) = other;
}

Animal& Animal::operator=(const Animal& other) {
	if(&other == this)
		return(*this);
	(*this).type = other.type;
	return(*this);
}

void Animal::makeSound() const {
	std::cout << "Animal Objects sound like nothing" << std::endl;
}

std::string Animal::getType() const {
	return((*this).type);
}