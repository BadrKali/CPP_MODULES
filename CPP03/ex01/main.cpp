/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:54:54 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/19 10:05:49 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ScavTrap.hpp"



int main() {
	std::string p1 = "PlayerOne";
	std::string p2 = "PlayerTwo";
	
	ScavTrap a(p1);
	ScavTrap b(p2);

	a.guardGate();
	b.attack(p1);
	a.takeDamage(20);
	b.attack(p1);
	a.takeDamage(20);
	a.beRepaired(10);
	a.attack(p2);
	b.attack(p1);
	a.takeDamage(20);
	b.attack(p1);
	a.takeDamage(20);
	b.attack(p1);
	a.takeDamage(20);
	b.attack(p1);
	a.takeDamage(20);
	b.attack(p1);
	a.takeDamage(20);
	a.attack(p2);
	
}