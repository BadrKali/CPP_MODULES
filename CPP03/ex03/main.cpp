/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:54:54 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:28:01 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"
#include"DiamondTrap.hpp"

int main() {
	std::string di = "Diaomond";
	std::string sc = "Scav";
	std::string fr = "Frag";
	
	DiamondTrap a(di);
	ScavTrap b(sc);
	FragTrap c(fr);

	a.whoAmI();
	b.attack(di);
	a.takeDamage(10);
	a.attack(fr);
	c.beRepaired(10);
	 
}