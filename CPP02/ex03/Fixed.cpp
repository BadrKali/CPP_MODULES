/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:45 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 11:13:38 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include<iostream>

//CONSTRUCTORES

Fixed::Fixed() {
	//CONSTRUCTOR
	//std::cout << "Default constructor called" << std::endl;
	(*this).fixedValue = 0;
}

Fixed::Fixed(const int value) {
	// std::cout << "Int Constructor Called" << std::endl;
	(*this).fixedValue = value << (*this).fractionalBits;
}

Fixed::Fixed(const float value) {
	//std::cout << "Float Constructor Called" << std::endl;
	(*this).fixedValue = roundf(value * (1 << (*this).fractionalBits));
}

Fixed::~Fixed() {
	//DESTRUCTOR
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source) {
	//std::cout << "Copy constructor called" << std::endl;
	(*this) = source;
	//(*this).fixedValue = source.fixedValue;
}

Fixed& Fixed::operator=(const Fixed& other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	//(*this).fixedValue = other.getRawBits();
	(*this).fixedValue = other.fixedValue;
	return(*this);
}

bool Fixed::operator == (const Fixed& other) const {
	return((*this).fixedValue == other.fixedValue);
}

bool Fixed::operator != (const Fixed& other) const {
	return(!((*this).fixedValue == other.fixedValue));
}

bool Fixed::operator < (const Fixed& other) const {
	return((*this).fixedValue < other.fixedValue);
}

bool Fixed::operator > (const Fixed& other) const {
	return((*this).fixedValue > other.fixedValue);
}

bool Fixed::operator >= (const Fixed& other) const {
	return(!((*this).fixedValue < other.fixedValue));
}


bool Fixed::operator <= (const Fixed& other) const {
	return(!((*this).fixedValue > other.fixedValue));
}

Fixed Fixed::operator + (const Fixed& other) const {
	return(Fixed((*this).fixedValue + other.fixedValue));
}

Fixed Fixed::operator - (const Fixed& other) const {
	return(Fixed((*this).fixedValue - other.fixedValue));
}

Fixed Fixed::operator * (const Fixed& other) const {
	
	return(Fixed((*this).toFloat() * other.toFloat()));
	// return(Fixed((*this).fixedValue * other.fixedValue));
}

Fixed Fixed::operator / (const Fixed& other) const {
	return(Fixed((*this).fixedValue / other.fixedValue));
}

Fixed& Fixed::operator ++() {
	float ep; 
	float value;

	ep = (float)1 / (1 << (*this).fractionalBits);
	value  = toFloat();
	value = value + ep;
	(*this).fixedValue = roundf(value * (1 << (*this).fractionalBits));

	return(*this);
}

Fixed Fixed::operator++(int) {
	Fixed copy = *this;
	operator++();
	return(copy);
}

Fixed& Fixed::operator --() {
	float ep; 
	float value;

	ep = (float)1 / (1 << (*this).fractionalBits);
	value  = toFloat();
	value = value - ep;
	(*this).fixedValue = roundf(value * (1 << (*this).fractionalBits));

	return(*this);
}

Fixed Fixed::operator--(int) {
	Fixed copy = *this;
	operator--();
	return(copy);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return(a.fixedValue > b.fixedValue ? b : a);
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b) {
	return(a.fixedValue > b.fixedValue ? b : a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return(a.fixedValue < b.fixedValue ? b : a);
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b) {
	return(a.fixedValue < b.fixedValue ? b : a);
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

