/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:33 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 11:13:54 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Fixed.hpp"
#include"Point.hpp"




int main( void ) {
	const Point a(2.14, 2.82);
	const Point b(4.22, 5.82);
	const Point c(4.54,4.1);
	const Point point(3.53, 4.81);
	if(bsp(a, b, c, point) == true)
		std::cout << "The point is Inside the Area of triangle" << std::endl;
	else
		std::cout << "The point is Outside the Area of triangle" << std::endl;
	return 0;
}