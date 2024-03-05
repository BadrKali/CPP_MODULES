/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:46:13 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/06 15:43:47 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av) {
	int i;
	int j;

	i = 1;
	j = 0;
	if(ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(1);
	}
	while(av[i] != NULL) {
		j = 0;
		while(av[i][j] != '\0') {
			std::cout << (char)std::toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return(0);
}
