/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:05:39 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/25 14:43:34 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const Converter &copy) {
	_Input = copy._Input;
}

Converter::Converter(std::string Input) {
	_Input = Input;
}

Converter::~Converter() {}

Converter & Converter::operator=(const Converter &assign) {
	_Input = assign._Input;
	return *this;
}

void	Converter::convertToChar() {
	try {
		int	i = std::stoi(_Input);
		if (isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;	
	}
	catch (...) {
		std::cerr << "char: impossible" << std::endl;
	}
}

void	Converter::convertToInt() {
	try {
		int i = std::stoi(_Input);
		std::cout << "int: " << i << std::endl;
	}
	catch (...) {
		std::cerr << "int: impossible" << std::endl;
	}
}

void	Converter::convertToFloat() {
	try {
		float f = std::stof(_Input);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: " << f << "f" << std::endl;
	}
	catch (...) {
		std::cerr << "float: impossible" << std::endl;
	}
}

void	Converter::convertToDouble() {
	try {
		double d = stod(_Input);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "double: " << d << std::endl;
	}
	catch (...) {
		std::cerr << "double: impossible" << std::endl;
	}
}
