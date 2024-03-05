/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:30:30 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:30:31 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include<iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);

		WrongAnimal& operator=(const WrongAnimal& other);
		std::string getType() const ;
		virtual void makeSound() const;

	protected:
		std::string type;

};


#endif