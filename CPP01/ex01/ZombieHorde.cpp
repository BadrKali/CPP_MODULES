/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:34:25 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:34:27 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"



Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombieHorde = new Zombie[N];

    for(int i = 0; i < N; i++)
        zombieHorde[i].setTheName(name);
    return(zombieHorde);
}