/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:31:55 by hgu               #+#    #+#             */
/*   Updated: 2024/03/17 22:27:44 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "no name";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " constructed by default constructor" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed by string constructor" << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap& ref)
{
	*this = ref;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& ref)
{
	this->name = ref.name; //std::string의 대입연산은 깊은 복사가 이루어진다
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
		return ;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		std::cout << "ClapTrap " << name << " can not move" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " loses " << amount << " hit points" << std::endl;
		hitPoints -= amount;
		if (hitPoints < 0)
		{
			hitPoints = 0;
			std::cout << "ClapTrap " << name << " can not move" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0 || energyPoints == 0)
		return ;
	std::cout << "ClapTrap " << name << " repairs itself " << amount << " hit points" << std::endl;
	energyPoints -= 1;
	hitPoints += amount;
}

int	ClapTrap::getAttackDamate() const
{
	return this->attackDamage;
}

//상속의 상속까지 진행하는데 claptrap은 부모의 부모이다
//당장은 대상객체를 받아서 감소시켜야 할 것 같지만, 메인문에서 대상에 데미지가 감소되도록 만든다
//지금은 부모를 만들기만 하므로 여기서 모든 동작이 다 완성될 필요는 없다
//가장작은 단위로 쪼개어 기능을 만들어두면 자식이 받아서 기능을 구체화한다
//상속을 받아 무언가를 만들 생각을 했다면, 부모의 객체를 어떻게 설계할지 생각해야하는데 모든
//클래스들을 이용해서 개발자가 클래스를 호출하는 외부영역에서 컨트롤 가능