/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:31:05 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/04 14:17:26 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	(*this).type = "Cat";
}

Cat::~Cat() {
	std::cout << "Default Destructor Called" << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	(*this) = other;
}

Cat& Cat::operator=(const Cat& other) {
	if(&other == this)
		return(*this);
	(*this).type = other.type;
	return(*this);
}

void Cat::makeSound() const {
	std::cout << "Cat sound : Myaw Myaw Myaw" << std::endl;
}
