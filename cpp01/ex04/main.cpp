/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:51:56 by hgu               #+#    #+#             */
/*   Updated: 2024/02/29 23:28:08 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid Input" << std::endl;
		return (1);
	}
	Replace myReplace = Replace();
	myReplace.setInfile(argv[1]); //인파일이름 설정
	myReplace.setFrom(argv[2]); //바꿔야할 문자열 설정
	myReplace.setTo(argv[3]); //바꿀 문자열 설정
	myReplace.setOutfile(); //출력할 파일 이름 설정
	if (myReplace.getInfileLen() == 0 || myReplace.getFromLen() == 0 || myReplace.getToLen() == 0)
	{
		std::cout << "Invalid Input" << std::endl;
		return (2);
	}
	std::ifstream ifs(myReplace.getInfile()); //선언 이후에 open함수를 사용하는 방법도 가능하다
	std::ofstream ofs(myReplace.getOutfile()); //출력할 ofstream 파일스트림 객체를 선언
	if (ifs.fail())
	{
		std::cout << "istream error" << std::endl;
		return (3);
	}
	//inline으로 처리
	myReplace.ftReplace(ifs, ofs);
	//getline함수의 인자는 filestream, 받을 문자열, 어디까지 받을지의 구분자이다
	//std::cout << "buffer : " << myReplace. << std::endl;
	ifs.close();
}

//c++의 모든 입출력 클래스는 ios_base를 기반 클래스로 한다
//ios클래스는 실제 스트림 버퍼를 초기화한다 -> 스트림 버퍼란 데이터를 내보내거나 받아들이기 전에 임시로 저장하는 장소
//파일을 읽을 때 실제로 한 뭉터기를 들고와서 스트림 버퍼에 저장해 놓은 뒤에 사용자가 요청할 때 마다 특정 크기만큼 꺼낸다
//ios클래스에서는 현재 입출력 작업의 상태를 처리한다 -> eof함수로 파일에 끝인지 아닌지 판별, good함수로 현재 입출력 작업을 잘 수행할 수 있는지 판별
//istream클래스에서는 >>연산자에 대한 연산자 오버로딩이 되어있다 -> 다른 객체에서도 연산자 오버로딩이 되어있어 >> 이용가능
//cin은 공백문자를 기준으로 입력받는다
//cin의 4개 플래그들
//goodbit : 스트림에 입출력 작업이 가능할 때
//badbit : 스트림에 복구 불가능한 오류 발생시
//failbit : 스트림에 복구 가능한 오류 발생시 -> 타입이 다르게 입력된경우 해당 비트가 켜지며 입력값을 받지 않고 리턴해버린다
//eofbit : 입력작업시에 EOF도달시
//cin.fail()함수는 failbit나 badbit가 true이면 true리턴
//cin.clear()는 플래그를 goodbit상태로 초기화해준다
//형식플래그와 조작자 -> cin.setf()함수로 진법변환가능
//std::endl은 개행을 출력하는 것 말고도, 버퍼를 모두 flush하는 역할도 수행한다
//모든 입출력 객체들은 이에 대응되는 스트림객체를 가지고 있다 -> 스트림 버퍼 클래스가 있는데 이름이 streambuf이다
//std::stringstream을 통해서 평범한 문자열을 마치 스트림인 것 처럼 이용할 수 있게 해줌

//파일입출력
//istream과 ostream을 상속받은 ifstream과 ofstream클래스로 다루어진다