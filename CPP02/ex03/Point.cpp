/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:21 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/14 11:13:27 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Point.hpp"

Point::Point() : x(0), y(0) {
	// std::cout << "Point Constructor" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y){

}

Point::Point(const Point& source) : x(source.x), y(source.y) {

}

Point::~Point() {

}

Point& Point::operator=(const Point& other){
	(void)other;
	return(*this);
}

float Point::getValueX(void) const{
	return((*this).x.toFloat());
}

float Point::getValueY(void) const{
	return((*this).y.toFloat());
}