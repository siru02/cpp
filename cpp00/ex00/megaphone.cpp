/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:00:57 by hgu               #+#    #+#             */
/*   Updated: 2024/02/21 20:41:59 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int j = 1; j < argc; j++)
	{
		str = argv[j];
		for (unsigned long i = 0; i < str.length(); i++)
		{
			// std::cout << static_cast<unsigned char>(std::toupper(str[i]));
			str[i] = std::toupper(str[i]);
		}
		std::cout << str;
	}
	std::cout << std::endl;
}