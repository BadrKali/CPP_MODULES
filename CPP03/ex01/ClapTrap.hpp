/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:03:48 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:50 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap {
	public:
		ClapTrap(); //Default Constructor
		ClapTrap(std::string& name);
		~ClapTrap(); 
		ClapTrap(const ClapTrap& other);

		ClapTrap& operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
};


#endif