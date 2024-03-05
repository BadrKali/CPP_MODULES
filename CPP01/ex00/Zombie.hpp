/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:32:52 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:32:53 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include<iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);


#endif