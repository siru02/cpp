/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:52:05 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 20:36:22 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private :
public :
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& ref);
	ScavTrap(ScavTrap &ref);

	ScavTrap(std::string name);
	void attack(const std::string& target);
	void guardGate();
};