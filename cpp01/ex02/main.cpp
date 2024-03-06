/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:49:30 by hgu               #+#    #+#             */
/*   Updated: 2024/02/29 23:40:31 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//references에 대한 공부가 필요
int main()
{
	std::string str1 = "HI THIS IS BRAIN";
	std::string* 		stringPTR = &str1;
	std::string&		stringREF = str1;

	std::cout << "----------------address------------------" << std::endl;
	std::cout << "str       : " << &str1 << std::endl;
	std::cout << "pointer   : " << stringPTR << std::endl;
	std::cout << "reference : " << &stringREF << std::endl;
	std::cout << "-----------------value------------------" << std::endl;
	std::cout << "str       : " << str1 << std::endl;
	std::cout << "pointer   : "<< *stringPTR << std::endl;
	std::cout << "reference : " << stringREF << std::endl;
}