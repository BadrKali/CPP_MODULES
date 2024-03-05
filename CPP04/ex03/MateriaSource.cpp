/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:59 by bel-kala          #+#    #+#             */
/*   Updated: 2024/01/24 11:01:24 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"



MateriaSource::MateriaSource() {
	// std::cout << "Materia Source Default Constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		(*this).materias[i] = NULL;
}

MateriaSource::~MateriaSource() {
	// std::cout << "MateriaSource Default Destructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		delete (*this).materias[i];
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for(int i = 0; i < 4; i++)
		(*this).materias[i] = NULL;
	(*this) = other;
}


MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if(&other == this)
		return(*this);
	int i = 0;
	while(i < 4) {
		if(other.materias[i] != NULL)
		{
			delete (*this).materias[i];
			(*this).materias[i] = other.materias[i]->clone();
		}
		i++;
	}
	return(*this);
}

void MateriaSource::learnMateria(AMatteria* materiaPr) {
	int i = 0;
	while(i < 4) {
		if((*this).materias[i] == NULL)
			break;
		i++;
	}
	if(i == 4)
		return;
	if(materiaPtr->getType() == "ice")
	{
		(*this).materias[i] = materiaPtr->clone();
		delete materiaPtr;
	}
	else if(materiaPtr->getType() == "cure")
	{
		(*this).materias[i] = materiaPtr->clone();
		delete materiaPtr;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	int i = 0;
	while(i < 4) {
		if((*this).materias[i] != NULL) {
			if((*this).materias[i]->getType() == type)
				return((*this).materias[i]->clone());
		}
		i++;
	};
	return(NULL);

}