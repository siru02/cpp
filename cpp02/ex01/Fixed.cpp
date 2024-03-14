/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:15:37 by hgu               #+#    #+#             */
/*   Updated: 2024/03/11 10:58:56 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& cout, const Fixed &ref) //전역함수에 의한 연산자 오버로딩
{//전역함수에 의한 연산자 오버로딩이므로 인자2개에 대한 연산 오버로딩이다
	//int tmp = ref.getRawBits();
	//////////////////////////////////////////
	// int num = 0B10000000000000000000000000000000;
	float test = ref.toFloat();

	// cout << "fixedVal : " << tmp << std::endl;
	// cout << "float : " << test << std::endl;
	// cout << "bits : ";
	// for (int i = 0; i < 32; i++)
	// {
	// 	if (i % 8 == 0)
	// 		cout << " ";
	// 	if (tmp & num)
	// 		cout << 1;
	// 	else
	// 		cout << 0;
	// 	num >>= 1;
	// }
	// cout << std::endl;
	///////////////////////////
	cout << test; //float형태로 표현해야한다
	return cout;
}

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
	fixedPointVal = num << fractionalBits;//고정소수점형태에서는 하위8개 비트가 소수비트이므로
}

/*It converts it to the corresponding fixed-point value.
The fractional bits value is
initialized to 8 like in exercise 00.*/
Fixed::Fixed(const float num)//float인자 num의 정수부분만 뽑아내서 int형 변수에 저장한다
{
	std::cout << "Float constructor called" << std::endl;
	//fixedPointVal = (int)num; //int 캐스팅으로 정수부는 따로 저장한다
	fixedPointVal = roundf(num * (1 << fractionalBits)); //roundf로 256을 곱한값에 반올림을 수행하여 딱 8개비트만 올라가지않고 9번째 비트를 고려하여 더 정확하게 값을 구한다
	//256을 곱한결과를 int캐스팅하면 소수점비트들중에서 8개비트까지 정수부에 속함
	//소수부의 비트중 상위8개비트를 정수부에 속하도록 하였으니 인트캐스팅한 수는 비트패턴을 그대로 들고있다
	/*
	float형은 부동소수점으로 부호비트 + 지수부(8) + 가수부(23)으로 이루어진다
	가수부는 실제 숫자를 정규화하여 1.xxxxxx꼴로 만들고 .xxxxxx부분을 저장한다
	1.xxxxxx의 꼴은 제일 왼쪽의 유효한 1이 나올때까지 오른쪽으로 미는 작업을 의미한다
	*/
}

Fixed::Fixed(const Fixed& copy)//복사생성자를 디폴트인스턴스를 생성한 후 복사대입연산자로 값을 할당하도록 설정
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy; //복사대입연산자 수행
}


Fixed& Fixed::operator=(const Fixed &ref) //멤버함수에 의한 연산자 오버로딩(클래스라는 지역에 정의되어있다)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointVal = ref.fixedPointVal;
	//this->setRawBits(ref.getRawBits());//현재 인스턴스에 참조할 객체의 값을 복사한다 //현재 인스턴스가 연산자의 왼쪽에 있는 피연산자
	return *this;
	//a=b=c이면 b=c가 먼저 실행되어 ref로 c가 들어오고 b에 c의 값을 복사한 후 b를 리턴한다
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//실수를 고정소수점형태의 11101.10101같은 형태로 표현가능
//이를 정규화하여 1.110110101 * 2^4와 같은 형태로 변환
float	Fixed::toFloat(void) const
{
	float	ans;
	//int mantissia; //고정소수점의 fractional과 같은 역할, 
	//정규화결과의 소수 부분을 mantissia자리에 그대로 넣고, 남는 자리는 0으로
//	int num = 0B10000000000000000000000000000000;
	//int exp = 0;
	// while (num && (tmp & num) != 1)
	// {
	// 	exp++;
	// 	num >>= 1;
	// }
	//exp는 첫1까지 몇개의 0을 거쳤는지 알려준다
	//31 - exp개만큼 >> 해야한다
	ans = fixedPointVal / (float)256;
	return ans;
}

int Fixed::toInt(void) const
{
    // 2^8 = 256으로 나누어 고정소수점 값을 정수로 변환
    return this->fixedPointVal / 256;
}

int 	Fixed::getRawBits(void) const
{
	return this->fixedPointVal;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointVal = raw;
}