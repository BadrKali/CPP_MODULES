/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:27 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:29 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Sed.hpp"

#include<fstream>
int main(int ac, char **av) {
	if(ac != 4) {
		std::cout << "** INVALID ARGUMENTS **" << std::endl;
		return(1);
	}
	Sed s(av);
	if(s.getHealthCheck() == true) {
		std::cout << "** INVALID ARGUMENTS **" << std::endl;
		return(1);
	}
	s.searchAndReplace();
}