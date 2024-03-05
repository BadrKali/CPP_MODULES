/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:06:06 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 08:55:15 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Fixed.hpp"
#include<iostream>

Fixed::Fixed() {
	//CONSTRUCTOR
	std::cout << "Default constructor called" << std::endl;
	(*this).fixedValue = 0;
}

Fixed::~Fixed() {
	//DESTRUCTOR
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source) {
	std::cout << "Copy constructor called" << std::endl;
	(*this) = source;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	(*this).fixedValue = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(fixedValue);
}

void Fixed::setRawBits(int const row) {
	(*this).fixedValue = row;
}

