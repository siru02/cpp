/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:31:56 by hgu               #+#    #+#             */
/*   Updated: 2024/03/06 20:26:12 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//void	(Harl::*fcnPtr[4])() = {Harl::debug, Harl::info, Harl::warning, Harl::error}; //void값을 반환하고 인자가 없는 함수를 가리키는 함수포인터의 배열
	void	(*test)() = debug;
	test();
	void	(Harl::*fcnPtr[3])() = {&Harl::info, &Harl::warning, &Harl::error}; //void값을 반환하고 인자가 없는 함수를 가리키는 함수포인터의 배열
	
	for (int i = 0; i < 3 ;i++)
	{
		if (levels[i] == level) //생각을 한번만 한다는게 if문을 한번만 사용해야한다는것
			(this->*fcnPtr[i])(); //메소드는 스태틱이 아니라면 객체를 참조하여 호출해야한다
			//-> 함수포인터로 함수를 호출할 때는 포인터를 해제한 다음 실제 함수를 호출하는 것이 아니라, 함수 포인터 자체를 호출해야한다
	}
}
//코드영역을 가리키는 포인터 -> 함수포인터
//함수포인터변수는 함수를 가리킬 수 있다ㄴ