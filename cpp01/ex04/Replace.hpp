/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:53:37 by hgu               #+#    #+#             */
/*   Updated: 2024/02/29 23:14:34 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>

class Replace
{
private :
	std::string	outfile;
	std::string input; //getline으로 한번 읽을 때 입력받는 버퍼
	std::string output; //마지막에 출력할 내용
	std::string infile; //입력받는 파일 이름
	std::string from;
	std::string to;
	int			infileLen;

public :
	void		setInfile(std::string str);
	void		setOutfile();
	void		setFrom(std::string str);
	void		setTo(std::string str);
	int			getInfileLen(void);
	int			getFromLen(void);
	int			getToLen(void);
	std::string getInfile(void);
	std::string	getOutfile(void);
	
	void	ftReplace(std::ifstream& ifs, std::ofstream& ofs);
	void	pushToOutfile(std::string output, std::string buffer);
	//읽은 문자열을 받아오고 str1을 str2로 교체한다 레퍼런스변수로 받으니 바로 바뀜
};