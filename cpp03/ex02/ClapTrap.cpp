/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:31:55 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:31:04 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "no name";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " constructed by default constructor" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed by string constructor" << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap& ref)
{
	*this = ref;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& ref)
{
	this->name = ref.name; //std::string의 대입연산은 깊은 복사가 이루어진다
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
		return ;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		std::cout << "ClapTrap " << name << "'s hit point is 0" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " loses " << amount << " hit points" << std::endl;
		hitPoints -= amount;
		if (hitPoints <= 0)
		{
			hitPoints = 0;
			std::cout << "ClapTrap " << name << "'s hit point is 0" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can not move" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " repairs itself " << amount << " hit points" << std::endl;
	energyPoints -= 1;
	hitPoints += amount;
}

int	ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}
