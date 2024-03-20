/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:28:22 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 22:13:55 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public :
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap& ref);
	DiamondTrap(DiamondTrap &ref);
	void attack(const std::string& target);
	DiamondTrap(std::string name);
	void  WhoAmI();
};