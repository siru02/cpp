/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:55:44 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 21:06:13 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap& operator= (ClapTrap& ref);
	ClapTrap(ClapTrap &ref);
	
	ClapTrap(std::string name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int	getAttackDamage() const;
};
