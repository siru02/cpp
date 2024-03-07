/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:47:23 by hgu               #+#    #+#             */
/*   Updated: 2024/03/07 22:48:16 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed //고정소수점방식
{
	/*
	고정소수점 : 부호비트, 정수부, 소수부로 나누어 표현 -> 소수부는 정수부와 다르게 2씩 곱하여 구한다
	부동소수점 : 고정소수점형태의 실수를 정규화하여 표현 -> 정규화란 정수부를 1만남기고 나머지를 전부 소수부로 넘기는것
	*/
private:
	int					fixedPointVal; //고정소수점으로 정수부와 소수부의 비트를 그대로 들고있다
	static const int	fractionalBits = 8; //소수부가 몇 비트인지를 저장
public:
//기본생성자, 복사생성자, 복사 대입 연산자, 소멸자 정의가 필요
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
	float toFloat( void ) const; //고정소수점을 부동소수점형태로 that converts the fixed-point value to a floating-point value
	int toInt( void ) const; //고정소수점을 정수형태로 fixed-point value to an integer value.
	
	int 	getRawBits(void) const; //리턴한 값이 수정불가능함을 명시하기위해 뒤에 const를 붙인다.
	void	setRawBits(int const raw);
};