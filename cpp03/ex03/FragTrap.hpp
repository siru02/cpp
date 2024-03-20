/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:07:03 by hgu               #+#    #+#             */
/*   Updated: 2024/03/20 22:11:55 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:

public:
	FragTrap();
	~FragTrap();
	FragTrap& operator=(FragTrap& ref);
	FragTrap(FragTrap &ref);

	FragTrap(std::string name);
	void attack(const std::string& target);
	void highFivesGuys(void);
};