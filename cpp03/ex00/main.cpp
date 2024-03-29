/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:13:00 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	one("one");
	ClapTrap	two("two");
	ClapTrap	three;

	one.attack("two");
	two.takeDamage(one.getAttackDamage());
	one.beRepaired(5);
	for (int i = 0; i < 2; i++)
	{
		three.attack("one");
		one.takeDamage(three.getAttackDamage());
	}
	three.attack("one");
	one.beRepaired(10);
}