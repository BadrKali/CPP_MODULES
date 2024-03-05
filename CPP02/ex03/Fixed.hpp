/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:38 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 10:29:55 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& source);
		Fixed(const int value);
		Fixed(const float value);

		Fixed& operator = (const Fixed& other);
		bool operator == (const Fixed& other) const;
		bool operator != (const Fixed& other) const;
		bool operator < (const Fixed& other) const;
		bool operator > (const Fixed& other) const;
		bool operator <= (const Fixed& other) const;
		bool operator >= (const Fixed& other) const;

		Fixed operator + (const Fixed& other) const;
		Fixed operator - (const Fixed& other) const;
		Fixed operator * (const Fixed& other) const;
		Fixed operator / (const Fixed& other) const;

		Fixed& operator ++();
		Fixed operator++(int);
		Fixed& operator --();
		Fixed operator --(int);


		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const ;
		int toInt(void) const;
	private:
		int fixedValue;
		static const int fractionalBits = 8;
};

std::ostream& operator << (std::ostream& stream, const Fixed& obj);

#endif