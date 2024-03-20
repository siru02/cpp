/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:52:05 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 22:12:11 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private :
public :
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& ref);
	ScavTrap(ScavTrap &ref);

	ScavTrap(std::string name);
	virtual void attack(const std::string& target);
	void guardGate();
};