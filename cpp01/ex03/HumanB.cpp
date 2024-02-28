/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:48:58 by hgu               #+#    #+#             */
/*   Updated: 2024/02/28 14:39:30 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)//생성자
{
	this->weapon = NULL;
}

HumanB::~HumanB() //소멸자
{
	std::cout << name << " destruction" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) //포인터변수이므로 초기화리스트로 넘어간다
{
	this->weapon = &weapon; //밖에서 가져온 객체와 동일하므로 주소를 할당해준다
}

void	HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

