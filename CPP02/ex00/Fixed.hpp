/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:06:14 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 08:54:43 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed(); 
		~Fixed(); 
		Fixed(const Fixed& source); 

		Fixed& operator = (const Fixed& other); 

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int fixedValue;
		static const int fractionalBits = 8;
};



#endif