/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:29:42 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/18 10:07:33 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>


class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);

		Animal& operator=(const Animal& other);
		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string type;

};



#endif