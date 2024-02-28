/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:20:27 by hgu               #+#    #+#             */
/*   Updated: 2024/02/27 15:59:17 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Foo: B
int main()
{
	std::cout << "-----------------------newZombie-------------------------" << std::endl;
	Zombie	*zombie = newZombie("Foo");
	zombie->announce();
	//std::cout << "delete zombie" << std::endl;
	delete zombie;
	std::cout << "-----------------------randomChump-----------------------" << std::endl;
	randomChump("stack");
}