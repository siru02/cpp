/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:12:59 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:09:20 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
/*	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;*/

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed by default constructor" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& ref)
{
	name = ref.name;
	hitPoints = ref.hitPoints;
	energyPoints = ref.hitPoints;
	attackDamage = ref.attackDamage;
	std::cout << "ScavTrap " << name << " copyed by operator=" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(ScavTrap& ref)
{
	*this = ref;
	std::cout << "ScavTrap " << name << " constructed by copy constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed by string constructor" << std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " can not move" << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << getAttackDamage();
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (hitPoints == 0 || energyPoints == 0)
		return ;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}