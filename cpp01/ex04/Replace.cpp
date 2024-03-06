/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:54:09 by hgu               #+#    #+#             */
/*   Updated: 2024/03/03 17:33:56 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void		Replace::setInfile(std::string str)
{
	this->infile = str;
}

void		Replace::setOutfile()
{
	this->outfile = this->infile;
	this->outfile.append(".replace");
}

void		Replace::setFrom(std::string str)
{
	this->from = str;
}

void		Replace::setTo(std::string str)
{
	this->to = str;
}

int			Replace::getInfileLen(void)
{
	return this->infile.length();
}

int			Replace::getFromLen(void)
{
	return this->from.length();
}

int			Replace::getToLen(void)
{
	return this->to.length();
}

std::string Replace::getInfile()
{
	return this->infile;
}

std::string	Replace::getOutfile(void)
{
	return this->outfile;
}

//파일을 읽어와서 특정 문자열을 다른 문자로 바꾼다
void	Replace::ftReplace(std::ifstream& ifs, std::ofstream& ofs)
{
	from = "\n";
	int		fromLen = from.length();
	int		toLen = to.length();
	size_t	pos = 0;
	
	// while (std::getline(ifs, input, '\0').eof() == false) //입력 스트림에서 문자들을 읽어서, 인자로 받은 문자열에 저장한다
	while (true)
	{
		std::getline(ifs, input, '\0');
		pos = 0;
		while (true)
		{
			pos = input.find(from, pos);
			if (pos == std::string::npos) //더 이상 찾을 단어가 존재하지않으면
				break ;
			input.erase(pos, fromLen);
			input.insert(pos, to);
			pos += toLen;
		}
		output.append(input);
		if (ifs.eof() == true)
			break ;
	}
	ofs << output;
}