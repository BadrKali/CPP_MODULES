/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:33:34 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 13:07:36 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

int main() {

    Zombie *zo = zombieHorde(10, "pedro");

    for(int i = 0; i < 10; i++) {
        zo[i].announce();
    }
    delete[] zo;
	zo = nullptr;
	return(0);
}
