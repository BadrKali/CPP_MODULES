/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:30:06 by bel-kala          #+#    #+#             */
/*   Updated: 2023/12/11 11:15:31 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor Called" << std::endl;
	(*this).type = "Dog";
	(*this).br = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog Default Destructor Called" << std::endl;
	delete (*this).br;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	(*this).br = NULL;
	(*this) = other;
}

Dog& Dog::operator=(const Dog& other) {
	if(&other == this)
		return(*this);
	if((*this).br)
		delete (*this).br;
	(*this).br = new Brain();
	*((*this).br) = *(other.br);
	(*this).type = other.type;
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "Dog sound : HAW HAW HAW" << std::endl;
}