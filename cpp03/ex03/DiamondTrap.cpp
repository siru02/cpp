/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:33:29 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:48:57 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	ClapTrap::name = name + "_clap_name";
	name = ClapTrap::name;
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

DiamondTrap::DiamondTrap(DiamondTrap& ref)
{
	*this = ref;
	std::cout << "DiamondTrap " << name << " constructed by copy constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) 
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap " << name << " constructed by string constructor" << std::endl; 
}

