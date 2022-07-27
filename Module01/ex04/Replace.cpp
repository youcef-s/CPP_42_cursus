/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:29:36 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/27 12:21:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
	: _filename(filename) , _s1(s1) , _s2(s2) {}

Replace::~Replace(){}

std::string	Replace::replace_line(std::string line) {
    int 		pos = 0;
	std::string	new_line;
	
	if (_s1 == "") {
		return (line);
	}
    while ((pos = line.find(_s1, pos)) != (int)std::string::npos) {
		new_line = line.substr(0, pos);
		new_line += _s2;
		pos += _s1.length();
		new_line += line.substr(pos);
		line = new_line;
    }
    return (line);
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
