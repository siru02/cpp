/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:33:38 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	two("two");
	FragTrap	three;
	FragTrap	four("four");

	two.attack("four");
	four.takeDamage(two.getAttackDamage());
	for (int i = 0; i < 6; i++)
	{
		three.attack("four");
		four.takeDamage(three.getAttackDamage());
	}
	four.beRepaired(10);
	three.highFivesGuys();
	four.highFivesGuys();
}