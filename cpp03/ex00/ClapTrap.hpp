/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:55:44 by hgu               #+#    #+#             */
/*   Updated: 2024/03/14 21:43:18 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
private:
	std::string name; //생성자 인자로 받아온다
	int			hitPoints; //체력
	int			energyPoints;
	int			attackDamage;
public:
	ClapTrap(); //기본생성자
	~ClapTrap();
	ClapTrap& operator= (ClapTrap& ref);
	ClapTrap(ClapTrap &ref);
	
	ClapTrap(std::string name);//생성자
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

//ClapTrap이 공격 -> 타겟이 공격데미지만큼 hit point가 줄어들게 만든다 -> 스스로 repair하면 <amount>만큼 포인트 회복
//공격과 회복은 1코스트에너지를 사용한다, 체력이나 에너지포인트가 부족하다면 아무것도 할 수 없다
//모든 멤버함수는 어떤일이 일어났는지 묘사해야한다
//ClapTrap <name> attacks <target>, causing <damage> points of damage!
//생성자와 소멸자는 메시지출력해야한다