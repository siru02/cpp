/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:45:21 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:24:37 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap	one("one");
	ScavTrap	two("two");
	FragTrap	three;
	FragTrap	four("four");

	one.attack("two");
	two.takeDamage(one.getAttackDamate()); //Claptrap으로 나옴
	one.beRepaired(5);//Claptrap으로 나옴
	for (int i = 0; i < 10; i++)
	{
		three.attack("four");
		four.takeDamage(three.getAttackDamate());
	}
	three.attack("four");
	four.takeDamage(three.getAttackDamate());
	four.beRepaired(10);
}