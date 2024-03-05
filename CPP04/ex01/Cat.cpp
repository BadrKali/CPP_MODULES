/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:29:57 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/18 10:07:18 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	(*this).type = "Cat";
	(*this).br = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Default Destructor Called" << std::endl;
	delete (*this).br;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	(*this).br = NULL;
	(*this) = other;
}


// Deep Copy

Cat& Cat::operator=(const Cat& other) {
	if(&other == this)
		return(*this);
	if((*this).br)
		delete (*this).br;
	(*this).br = new Brain();
	*(*this).br = *(other.br);
	(*this).type = other.type;
	return(*this);
}

//Shallow Copy

// Cat& Cat::operator=(const Cat& other) {
// 	(*this).br = other.br;
// 	(*this).type = other.type;
// 	return(*this);
// }

void Cat::makeSound() const {
	std::cout << "Cat sound : Myaw Myaw Myaw" << std::endl;
}


void Cat::setCatIdeas(int idx, std::string idea) {
	(*this).br->setIdeas(idx, idea);
}

std::string Cat::getCatIdeas(int idx) {
	return((*this).br->getIdea(idx));
}