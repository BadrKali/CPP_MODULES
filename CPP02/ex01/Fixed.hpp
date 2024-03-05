/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:06:50 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 09:21:30 by bel-kala         ###   ########.fr       */
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