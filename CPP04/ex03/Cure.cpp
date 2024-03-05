/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:17 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:58:10 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"



Cure::Cure() {
	// std::cout << "Cure Default Constructor Called" << std::endl;
	(*this).type = "cure";
}

Cure::~Cure() {
	// std::cout << "Cure Default Destructor Called" << std::endl;
}

Cure::Cure(const Cure& other) {
	// std::cout << "Cure copy constructor Called" << std::endl;
	(void)other;
	(*this) = other;
}

Cure& Cure::operator=(const Cure& other) {
	(void)other;
	return((*this));
}

AMateria* Cure::clone() const {
	return(new Cure());
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s" << " wounds" << std::endl;
}