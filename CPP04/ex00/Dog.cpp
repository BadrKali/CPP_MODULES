/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:31:14 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/04 14:17:23 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor Called" << std::endl;
	(*this).type = "Dog";
}

Dog::~Dog() {
	std::cout << "Default Destructor Called" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	(*this) = other;
}

Dog& Dog::operator=(const Dog& other) {
	if(&other == this)
		return(*this);
	(*this).type = other.type;
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "Dog sound : HAW HAW HAW" << std::endl;
}