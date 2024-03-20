/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:33:29 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 22:44:29 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	ClapTrap::name = name + "_clap_name";
	energyPoints = ScavTrap::energyPoints;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " constructed by default constructor" << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& ref)
{
	name = ref.name;
	hitPoints = ref.hitPoints;
	energyPoints = ref.hitPoints;
	attackDamage = ref.attackDamage;
	std::cout << "DiamondTrap " << name << " copyed by operator=" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap& ref) : ClapTrap(ref), FragTrap(ref), ScavTrap(ref)
{
	*this = ref;
	std::cout << "DiamondTrap " << name << " constructed by copy constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) 
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " constructed by string constructor" << std::endl; 
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI()
{
	std::cout << "I am diamondTrap [" << name << "]" << std::endl;
	std::cout << "hit point is " << hitPoints << std::endl;
	std::cout << "energy point is " << energyPoints << std::endl;
	std::cout << "attackDamage is " << attackDamage << std::endl;
}
