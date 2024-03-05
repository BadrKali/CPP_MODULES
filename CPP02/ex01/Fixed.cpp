/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:06:43 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 09:27:25 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Fixed.hpp"
#include<iostream>

//CONSTRUCTORES

Fixed::Fixed() {
	//CONSTRUCTOR
	std::cout << "Default constructor called" << std::endl;
	(*this).fixedValue = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Int Constructor Called" << std::endl;
	(*this).fixedValue = value << (*this).fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float Constructor Called" << std::endl;
	(*this).fixedValue = roundf(value * (1 << (*this).fractionalBits));
}

Fixed::~Fixed() {
	//DESTRUCTOR
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source) {
	std::cout << "Copy constructor called" << std::endl;
	(*this) = source;
}

//Operators overloading

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	(*this).fixedValue = other.fixedValue;
	return(*this);
}




//Methodes

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(fixedValue);
}

void Fixed::setRawBits(int const row) {
	(*this).fixedValue = row;
}

float Fixed::toFloat(void) const {
	return((float)fixedValue / (1 << (*this).fractionalBits));
}

int Fixed::toInt(void) const {
	return((*this).fixedValue / (1 << (*this).fractionalBits));
}

std::ostream& operator << (std::ostream& stream, const Fixed& obj) {
	stream << obj.toFloat();
	return(stream);
}