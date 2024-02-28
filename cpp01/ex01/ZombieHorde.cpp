/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:31:07 by hgu               #+#    #+#             */
/*   Updated: 2024/02/27 15:31:51 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N]; //크기가 N인 Zombie배열
	for (int i = 0; i < N; i++){
		horde[i].setName(name); //각 객체마다 이름 할당
	}
	return horde;
}