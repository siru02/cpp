/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:24:46 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	one("one");
	ScavTrap	two("two");
	ScavTrap	three;

	one.attack("two");
	two.takeDamage(one.getAttackDamate()); //Claptrap으로 나옴
	one.beRepaired(5);//Claptrap으로 나옴
	for (int i = 0; i < 10; i++)
	{
		three.attack("one");
		one.takeDamage(three.getAttackDamate());//Claptrap으로 나옴
	}
	three.attack("one");
	one.beRepaired(10);
}