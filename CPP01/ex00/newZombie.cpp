/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:32:30 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:32:32 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


Zombie *newZombie(std::string name) {
	Zombie *newZombie;

	newZombie = new Zombie(name);
	return(newZombie);
}