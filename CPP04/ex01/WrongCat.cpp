/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:30:35 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:56:27 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"WrongCat.hpp"


WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor" << std::endl;
	(*this).type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Default Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	(*this) = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if(&other == this)
		return(*this);
	(*this).type = other.type;
	return(*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat Sound" << std::endl;
}