/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:24:47 by hgu               #+#    #+#             */
/*   Updated: 2024/02/21 20:46:07 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact PhoneBook::arrayContacts[8];
int PhoneBook::userCnt = -1;
int	PhoneBook::userIdx = -1; 

void	PhoneBook::addToPhoneBook()
{
	userCnt++;
	if (userCnt > 7)
		userCnt = 7;
	userIdx++;
	if (userIdx > 7)
		userIdx = 0;
	arrayContacts[userIdx].init();
}

void	PhoneBook::search()
	{
	int			idx;

	for (int i = 0; i <= userCnt; i++)
	{
		std::cout << "         " << i;
		arrayContacts[i].showContact();
	}
	while (1)
	{
		std::cout << "Enter the index : ";
		std::cin >> idx;
		if (std::cin.eof() == true)
			std::exit(1);
		if (std::cin.fail() == true)
		{
			std::cin.clear(); //clear the fail flag
			std::cin.ignore(255, '\n');
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		std::cin.ignore(255, '\n');
		if (idx <= userCnt && idx >= 0)
				break ;
		std::cout << "Invalid input" << std::endl;
		if (userCnt == -1)
			return ;
	}
	arrayContacts[idx].showContactDetail();
}
	
void	PhoneBook::exit()
{
	std::exit(0);
}


int main()
{
	PhoneBook	phoneBook;
	std::string cmdInput;

	while (1)
	{
		std::cout << "Enter the command : ";
		std::cin >> cmdInput;
		if (std::cin.eof() == true)
			std::exit(1);
		std::cin.ignore(255, '\n');
		if (std::cin.fail() == true)
		{
			std::cin.clear();
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		if (cmdInput.length() == 0)
		{
			std::cin.ignore(255, '\n');
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		if (cmdInput == "ADD")
		{
			phoneBook.addToPhoneBook();
		}
		else if (cmdInput == "SEARCH")
			phoneBook.search();
		else if (cmdInput == "EXIT")
			phoneBook.exit();
		else
			std::cout << "Invalid input" << std::endl;
	}
}