/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:54:54 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/19 10:31:02 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"
#include"FragTrap.hpp"


int main() {
	std::string p1 = "PlayerOne";
	std::string p2 = "PlayerTwo";

	FragTrap a(p1);
	FragTrap b(p2);

	a.attack(p2);
	b.takeDamage(30);
	a.attack(p2);
	b.takeDamage(30);
	b.attack(p1);
	b.beRepaired(10);
	a.highFivesGuys();
	b.highFivesGuys();
}