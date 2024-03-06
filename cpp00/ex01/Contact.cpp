/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:12:57 by hgu               #+#    #+#             */
/*   Updated: 2024/02/21 20:40:25 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::initField(std::string str)
{
	std::string field;
	while (1)
	{
		std::cout << "Enter " << str << " : ";
		std::cin >> field;
		if (std::cin.eof() == true)
			std::exit(1);
		//EOF플래그가 켜져서 fail이 반복된다.
		if (std::cin.fail() == true)
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		if (field.length() == 0)
		{
			std::cin.ignore(255, '\n');
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		std::cin.ignore(255, '\n');
		break;
	}
	return (field);
}

void	Contact::init()
{
	firstName = initField("FirstName");
	lastName = initField("LastName");
	nickName = initField("NickName");
	while (1)
	{
		std::cout << "Enter PhoneNumber : ";
		std::cin >> phoneNumber;
		if (std::cin.eof() == true)
			std::exit(1);
		if (std::cin.fail() == true)
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		std::cin.ignore(255, '\n');
		break;
	}
	darkestSecret = initField("DarkestSecret");
}

void	Contact::printField(std::string str)
{
	unsigned int idx = 0;
	if (str.length() >= 10)
	{
		for (; idx < 10; idx++)
		{
			if (idx == 9)
				std::cout << ".";
			else
				std::cout << str[idx];
			}
	}
	else
	{
		for (unsigned int i = 0; i + str.length() < 10; i++)
			std::cout << " ";
		for (; idx < str.length(); idx++)
			std::cout << str[idx];
	}
}

void	Contact::showContact()
{
	std::cout << "|";
	printField(firstName);
	std::cout << "|";
	printField(lastName);
	std::cout << "|";
	printField(nickName);
	std::cout << std::endl;
}

void	Contact::showContactDetail()
{
	std::cout << "FirstName : " << firstName << std::endl;
	std::cout << "LastName : " << lastName << std::endl;
	std::cout << "NickName : " << nickName << std::endl;
	std::cout << "PhoneNumber : " << phoneNumber << std::endl;
	std::cout << "DarkestSecret : " << darkestSecret << std::endl;
}