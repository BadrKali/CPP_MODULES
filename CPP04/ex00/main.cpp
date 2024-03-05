/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:31:25 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/27 10:48:56 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	//main 2
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;

	//main 1
	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();
	// const WrongCat* l = new WrongCat();
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); 
	// meta->makeSound();
	// l->makeSound();
	// delete meta;
	// delete i;
	// delete l;

	return 0;
}