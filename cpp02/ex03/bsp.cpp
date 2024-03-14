/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:00:17 by hgu               #+#    #+#             */
/*   Updated: 2024/03/11 14:55:49 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point abVector(a.getX() - b.getX(), a.getY() - b.getY());
	Point bcVector(b.getX() - c.getX(), b.getY() - c.getY());
	Point caVector(c.getX() - a.getX(), c.getY() - a.getY());
	Point apVector(a.getX() - point.getX(), a.getY() - point.getY());
	Point bpVector(b.getX() - point.getX(), b.getY() - point.getY());
	Point cpVector(c.getX() - point.getX(), c.getY() - point.getY());

	if (abVector.getX().toFloat() / apVector.getX().toFloat()\
	 == abVector.getY().toFloat() / apVector.getY().toFloat())
		return false;
	if (bcVector.getX().toFloat() / bpVector.getX().toFloat()\
	 == bcVector.getY().toFloat() / bpVector.getY().toFloat())
		return false;
	if (caVector.getX().toFloat() / cpVector.getX().toFloat()\
	 == caVector.getY().toFloat() / cpVector.getY().toFloat())
		return false;
		
	if (abVector.getX().toFloat() * apVector.getX().toFloat() + \
	abVector.getY().toFloat() * apVector.getY().toFloat() < 0)
		return false;
	if (bcVector.getX().toFloat() * bpVector.getX().toFloat() + \
	bcVector.getY().toFloat() * bpVector.getY().toFloat() < 0)
		return false;
	if (caVector.getX().toFloat() * cpVector.getX().toFloat() + \
	caVector.getY().toFloat() * cpVector.getY().toFloat() < 0)
		return false;
	return true;
}