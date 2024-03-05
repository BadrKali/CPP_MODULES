/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:07 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/06 10:17:30 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Character.hpp"




Character::Character() {
	std::cout << "Character Default Constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		(*this).materias[i] = NULL;
}

Character::Character(std::string name) {
	std::cout << "Character Default Constructor called" << std::endl;
	(*this).name = name;
	for(int i = 0; i < 4; i++)
		(*this).materias[i] = NULL;
}

Character::~Character() {
	std::cout << "Character Default Constructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		delete (*this).materias[i];
}

Character::Character(const Character& other) {
	std::cout << "Character copy Constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		(*this).materias[i] = NULL;
	*this = other;
}

Character& Character::operator=(const Character& other) {
	std::cout << "hewqeqwello" << std::endl;
	if(&other == this)
		return(*this);
	(*this).name = other.name;
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


std::string const& Character::getName() const {
	return((*this).name);
}


void Character::use(int idx, ICharacter& target) {
	if((*this).materias[idx] != NULL && idx >= 0 && idx < 4)
		materias[idx]->use(target);
}

void Character::equip(AMateria* m) {
	int idx = 0;
	if(m == NULL)
		return;
	while(idx < 4) {
		if((*this).materias[idx] == NULL)
			break;
		idx++;
	}
	if(idx == 4) 
		return;
	(*this).materias[idx] = m;
}

void Character::unequip(int idx) {
	if(idx < 0 || idx >= 4)
		return;
	(*this).materias[idx] = NULL;
}
