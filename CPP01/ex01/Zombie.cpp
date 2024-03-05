/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:33:47 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:33:49 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"



Zombie::Zombie() {
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) {
    (*this).name = name;
}

Zombie::~Zombie() {
	std::cout << (*this).name <<" : Destructor called" << std::endl;
}


void Zombie::setTheName(std::string name) {
    (*this).name = name;
}

void Zombie::announce(void) {
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}