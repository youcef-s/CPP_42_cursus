/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:34:45 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/08 14:46:18 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(float x1, float y1, float x2, float y2, float x3, float y3) {
	float result;

	result = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
	if (result < 0)
		return (-1 * result);
	else
		return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	float A = area(a.getX().toFloat(),a.getY().toFloat(), b.getX().toFloat(),
		b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());

	float A1 = area(point.getX().toFloat(), point.getY().toFloat(), b.getX().toFloat(),
		b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());

	float A2 = area(a.getX().toFloat(), a.getY().toFloat(), point.getX().toFloat(),
		point.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());

	float A3 = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(),
		b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());

	if (A == A1 + A2 + A3)
		return (true);
	else
		return (false);
}
