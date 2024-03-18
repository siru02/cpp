/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:28:22 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:47:38 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;
public :
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap& ref);
	DiamondTrap(DiamondTrap &ref);

	DiamondTrap(std::string name);
	void attack(const std::string& target);
	void guardGate(); //DiamondTrap이 이제 Gate keeper mode임을 알려준다
};