/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 22:24:07 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap three("three");
	FragTrap	four("four");
	DiamondTrap	five("five");

	three.WhoAmI();
	five.WhoAmI();
	for (int i = 0; i < 3; i++)
	{
		three.attack("four");
		four.takeDamage(three.getAttackDamage());
	}
	three.attack("four");
	four.takeDamage(three.getAttackDamage());
	four.beRepaired(10);
	three.beRepaired(100);
}