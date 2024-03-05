/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:48 by bel-kala          #+#    #+#             */
/*   Updated: 2024/01/24 11:02:03 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#include"AMateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"


int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me = bob;
	// me->use(0, *bob);
	// me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}