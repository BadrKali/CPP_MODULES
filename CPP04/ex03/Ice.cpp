/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:29 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:58:18 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"



Ice::Ice() {
	// std::cout << "Ice Default Constructor" << std::endl;
	(*this).type = "ice";
}

Ice::~Ice() {
	// std::cout << "Ice Default Destructor Called" << std::endl;
}

Ice::Ice(const Ice& other){
	// std::cout << "Ice copy constructor Called" << std::endl;
	(*this) = other;

}

Ice& Ice::operator=(const Ice& other) {
	(void)other;
	return(*this);
}

AMateria* Ice::clone() const {
	return(new Ice());
}


void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}