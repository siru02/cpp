/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:20:30 by hgu               #+#    #+#             */
/*   Updated: 2024/02/27 16:05:55 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private: //변수들은 private로 선언하여 외부에서 접근하지 못하도록 한다 -> getter setter사용
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
	void		announce(void);
//	void		setName(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);