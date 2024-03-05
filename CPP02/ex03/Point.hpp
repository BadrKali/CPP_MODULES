/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:15 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/13 17:20:17 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"


class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& source);
		~Point();

		Point& operator = (const Point& other);
		float getValueX() const ;
		float getValueY() const ;
	private:
		const Fixed x;
		const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif