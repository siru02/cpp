/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:52:05 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:39:07 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
//constructor and destructor and attack() should be overriding
//proper con/des chaining must be shown in your tests
//어째서 기초클래스의 생성자가 먼저 호출되는지, 소소멸멸자자는  어째서 반대로 호출되는지
class ScavTrap : public virtual ClapTrap
{
private :
public :
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& ref);
	ScavTrap(ScavTrap &ref);

	ScavTrap(std::string name);
	void attack(const std::string& target);
	void guardGate(); //ScavTrap이 이제 Gate keeper mode임을 알려준다
};