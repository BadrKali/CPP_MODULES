/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:37:32 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:37:33 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include"Harl.hpp"

int main(int ac, char **av) {
	Harl test;
	std::string value;

	if(ac != 2) {
		std::cout << "INVALID ARGUMENTS" << std::endl;
		return(1);
	}
	value = av[1];
	if(!value.empty())
		test.complain(value);
	return(0);
}