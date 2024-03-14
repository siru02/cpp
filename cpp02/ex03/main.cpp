/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:29:00 by hgu               #+#    #+#             */
/*   Updated: 2024/03/11 15:19:21 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point o;
	Point a(1.5, 2.0);
	Point b(4.0, 3.5);
	Point c(2.0, 5.0);

	Point p1(2.0, 4.0);
	std::cout << "(2.0, 4.0) is in triangle? " << bsp(a, b, c, p1) << std::endl;
	p1 = o;
	std::cout << "(0, 0) is in triangle? " << bsp(a, b, c, p1) << std::endl;
	Point p2(3.0, 4.25);
	std::cout << "(3.0, 4.25) is in triangle? " << bsp(a, b, c, p2) << std::endl;

}