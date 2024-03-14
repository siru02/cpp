/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:00:05 by hgu               #+#    #+#             */
/*   Updated: 2024/03/11 14:57:41 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) //아무인자도 넣지 않으면 Fixed도 기본생성자가 호출돼서 fixedPointVal이 0으로 초기화됨
{
	
}
Point::Point(const float xVal, const float yVal) : x(xVal), y(yVal)
{
	
}
Point::Point(const Point& ref)
{
	*this = ref;
}

Point& Point::operator=(const Point& ref)//copy assignment operator
{
	const_cast<Fixed&>(this->x) = ref.x;
	const_cast<Fixed&>(this->y) = ref.y;
	// Point* tmp = new Point(ref.x.toFloat(), ref.y.toFloat()); //생성하고 바로 초기화하고 this를 지우고 this에 대입
	// delete(this);
	// *this = *tmp;
	// return (*this);
	return (*this);
}

Point::~Point() //default destructor
{
	
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}