/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:29:00 by hgu               #+#    #+#             */
/*   Updated: 2024/03/06 20:22:50 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
//함수포인터를 사용할것

class Harl{
private:
	static void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	void complain( std::string level );
};
