/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:25:59 by hgu               #+#    #+#             */
/*   Updated: 2024/02/21 20:29:17 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		int			phoneNumber;
		std::string darkestSecret;
	public:
		void		init();
		void		printField(std::string str);
		void		showContact();
		void		showContactDetail();
		std::string	initField(std::string str);
};
