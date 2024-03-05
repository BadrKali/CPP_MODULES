/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:32:46 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:32:48 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


Zombie::Zombie(std::string name) {
	(*this).name = name;
}

Zombie::~Zombie() {
	//DESTRUCTOR
	std::cout << (*this).name << " : has been destructed :(" << std::endl;
}

void Zombie::announce(void) {
	std::cout << (*this).name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
