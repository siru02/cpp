/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:59:46 by hgu               #+#    #+#             */
/*   Updated: 2024/03/11 14:56:46 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point(); //default constructor
	Point(const float xVal, const float yVal);
	Point(const Point& ref);
	Point& operator=(const Point& ref);//copy assignment operator
	~Point(); //default destructor
	void setX(Point point);
	void setY(Point point);
	Fixed getX(void) const;
	Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);