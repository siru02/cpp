/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:32:58 by hgu               #+#    #+#             */
/*   Updated: 2024/02/28 14:48:52 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name; //이름도 참조자로 만들면 생성과 동시에 초기화되어야 하므로 NULL이 들어오는 경우 컴파일러에서 막아준다
	Weapon 		&weapon; //선언만 된거고 메모리에 올라가지 않았다 -> 참조자는 메모리에 올라가는 시점에 바로 초기화되어야한다

public:
	HumanA(std::string name, Weapon &weaponRef); //파라미터에 존재하지 않아도 초기화리스트로 초기화가능하다
	~HumanA();
	void	attack();
};