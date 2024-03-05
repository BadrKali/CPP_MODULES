/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:32:19 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 13:03:00 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"


int main() {
	Zombie *f;

	f = newZombie("foo");
	f->announce();

	randomChump("soo");
	delete f;
	f = nullptr;
}

