/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:26:56 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/28 10:58:42 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"AMateria.hpp"



AMateria::AMateria() {
	// std::cout << "AMateria Default Constructor Called" << std::endl;
}


AMateria::AMateria(std::string const& type) {
	// std::cout << "AMateria copy constructor Called" << std::endl;
	(*this).type = type;
}

AMateria::~AMateria() {
	// std::cout << "AMateria Destructor Called" << std::endl;
}


AMateria::AMateria(const AMateria& other) {
	// std::cout << "AMateria Constructor assyn Called" << std::endl;
	(void)other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	// std::cout << "AMateria copy assyn Called" << std::endl;
	(void)other;
	return(*this);
}


std::string const& AMateria::getType() const {
	return((*this).type);
} 


void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "The Use in AMateria" << std::endl;
}