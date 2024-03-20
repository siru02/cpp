/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:06:54 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:11:22 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed by default constructor" << std::endl; 
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructed" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& ref)
{
	name = ref.name;
	hitPoints = ref.hitPoints;
	energyPoints = ref.hitPoints;
	attackDamage = ref.attackDamage;
	std::cout << "FragTrap " << name << " copyed by operator=" << std::endl;
	return *this;
}

FragTrap::FragTrap(FragTrap& ref)
{
	*this = ref;
	std::cout << "FragTrap " << name << " constructed by copy constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed by string constructor" << std::endl; 
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " can not move" << std::endl;
		return ;
	}
	energyPoints -= 1;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << getAttackDamage();
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " can not move" << std::endl;
		return ;
	}
	std::cout << "Frag Trap " << name << " requests positive high fives" << std::endl;
}