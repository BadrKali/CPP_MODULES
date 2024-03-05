/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:50 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/13 17:20:55 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"



float tri_area_calc(float x1, float y1, float x2, float y2, float x3, float y3) {
	float area;

	area = abs((x1 * (y3 - y2) + x2 * (y1 - y3) + x3 * (y2 - y1))/2);
	return(area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float triOne = tri_area_calc(a.getValueX(), a.getValueY(), b.getValueX(), b.getValueY(), c.getValueX(),c.getValueY());
	float triTwo = tri_area_calc(point.getValueX(), point.getValueY(), b.getValueX(),b.getValueY(),c.getValueX(),c.getValueY());
	float triThree = tri_area_calc(a.getValueX(), a.getValueY(),point.getValueX(), point.getValueY(),c.getValueX(),c.getValueY());
	float triFoor = tri_area_calc(a.getValueX(), a.getValueY(), b.getValueX(), b.getValueY(),point.getValueX(),point.getValueY());
	return((triOne == triTwo + triThree + triFoor) ? true : false);
}