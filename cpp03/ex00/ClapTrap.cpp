/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:31:55 by hgu               #+#    #+#             */
/*   Updated: 2024/03/14 21:58:13 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed by string constructor" << std::endl; 
}

ClapTrap&	ClapTrap::operator=(ClapTrap& ref)
{
	this->name = ref.name; //이렇게 해도 되나?
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed" << std::endl; 
}