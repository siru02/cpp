/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:20:27 by hgu               #+#    #+#             */
/*   Updated: 2024/02/27 16:06:29 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Foo: B
int main()
{
	Zombie *horde = zombieHorde(4, "hgu");
	for (int i = 0; i < 4; i++){
		horde[i].announce();
	}
	delete[] horde;
}