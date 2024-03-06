/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:25:12 by hgu               #+#    #+#             */
/*   Updated: 2024/02/21 20:39:25 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	static Contact	arrayContacts[8];
	static int		userCnt;
	static int		userIdx;
	
public:
	void	addToPhoneBook();
	void	search();
	void	exit();
};
