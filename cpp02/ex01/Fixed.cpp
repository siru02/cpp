/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:37 by hgu               #+#    #+#             */
/*   Updated: 2024/03/07 22:52:58 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPointVal = 0;
}

/*It converts it(param num) to the corresponding fixed-point value. 
The fractional bits value is
initialized to 8 like in exercise 00.*/
Fixed::Fixed(const int num)//인자 num을 고정소수점형태로
{
	std::cout << "Int constructor called" << std::endl;
	fixedPointVal = num; //정수부를 그대로 넣어준다
	setRawBits(0);
}

/*It converts it to the corresponding fixed-point value.
The fractional bits value is
initialized to 8 like in exercise 00.*/
Fixed::Fixed(const float num)//float인자 num의 정수부분만 뽑아내서 int형 변수에 저장한다
{
	std::cout << "Float constructor called" << std::endl;
	fixedPointVal = (int)num; //int 캐스팅으로 정수부는 따로 저장한다
	setRawBits()
	
	//float은 비트연산이 불가능하다
	/*
	float형은 부동소수점으로 부호비트 + 지수부(8) + 가수부(23)으로 이루어진다
	가수부는 실제 숫자를 정규화하여 1.xxxxxx꼴로 만들고 .xxxxxx부분을 저장한다
	1.xxxxxx의 꼴은 제일 왼쪽의 유효한 1이 나올때까지 오른쪽으로 미는 작업을 의미한다
	*/
}

Fixed::Fixed(Fixed& copy)//
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &ref)//
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointVal = ref.getRawBits();
	return *this;
	//a=b=c이면 b=c가 먼저 실행되어 ref로 c가 들어오고 b에 c의 값을 복사한 후 b를 리턴한다
}
//실수를 고정소수점형태의 11101.10101같은 형태로 표현가능
//이를 정규화하여 1.110110101 * 2^4와 같은 형태로 변환
float	Fixed::toFloat(void) const
{
	int mantissia; //고정소수점의 fractional과 같은 역할, 정규화결과의 소수 부분을 mantissia자리에 그대로 넣고, 남는 자리는 0으로
	
}

int Fixed::toInt( void ) const
{//고정소수점 값을 정수 값으로 변환
	int tmp = getRawBits();
	
	setRawBits(tmp >> 16);
}

int 	Fixed::getRawBits(void) const
{
	return this->fixedPointVal;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointVal = raw;
}