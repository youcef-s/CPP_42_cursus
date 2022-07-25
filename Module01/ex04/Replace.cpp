/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:29:36 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/25 12:19:27 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
	: _filename(filename) , _s1(s1) , _s2(s2) {}

Replace::~Replace(){}

std::string	Replace::replace_line(std::string line) {
    int 		pos = 0;
	int			start;
	std::string	new_line;
	
    while ((pos = line.find(_s1, pos)) != (int)std::string::npos) {
		start = pos;
		new_line = line.substr(0, start);
		new_line += _s2;
		start += _s1.length();
		new_line += line.substr(start);
		line = new_line;
		pos += _s2.length();
    }
    return line;
}

void	Replace::ft_replace() {
	std::string		line;
	std::ifstream	ifile(_filename);
	std::ofstream	ofile;

	if (ifile.is_open()) {
		ofile.open(_filename+".replace", std::ios::trunc);
		if (!ofile.is_open()) {
			std::cout << "Cannot open " << _filename << ".replace" << std::endl;
			exit (1);
		}
		while (getline(ifile, line)) {
			ofile << this->replace_line(line) << "\n";
		}
		ifile.close();
		ofile.close();
	}
	else
		std::cout << "Cannot open " << _filename << std::endl;
}