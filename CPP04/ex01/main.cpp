/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:30:16 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/18 10:06:49 by bel-kala         ###   ########.fr       */
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
	Cat a;
	a.makeSound();
	// int i;
	// int arrayLenth;

	// i = 0;
	// arrayLenth = 10;
	// Animal* arAnimal[arrayLenth];
	// while(i < arrayLenth)
	// {
	// 	if(i < 5)
	// 		arAnimal[i] = new Dog;
	// 	if(i >= 5 && i < arrayLenth)
	// 		arAnimal[i] = new Cat;
	// 	i++;
	// }
	// std::cout << "<-------------Destruction Begin------------->" << std::endl;
	// for(int i = 0; i < arrayLenth; i++)
	// 	delete arAnimal[i];
	return 0;
}