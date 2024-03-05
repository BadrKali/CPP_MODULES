/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:54:54 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:02:38 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"




int main() {

	std::string p1 = "PlayerOne";
	std::string p2 = "PlayerTwo";

	ClapTrap a(p1);
	ClapTrap b(p2);
	
	a.attack(p2);
	b.takeDamage(0);
	b.beRepaired(0);
	b.attack(p1);
	b.attack(p1);
	a.attack(p2);

	return(0);
}