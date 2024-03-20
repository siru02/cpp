/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:15:39 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	one("one");
	ScavTrap	two("two");
	ScavTrap	three;

	one.attack("two");
	two.takeDamage(one.getAttackDamage());
	one.beRepaired(5);
	for (int i = 0; i < 6; i++)
	{
		three.attack("one");
		one.takeDamage(three.getAttackDamage());
	}
	three.attack("one");
	one.beRepaired(10);
	one.guardGate();
	three.guardGate();
}