/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:13:53 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/17 18:13:54 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "Wrong Animal";
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_) {
	type = type_;
	std::cout << "\e[0;33mFields Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign) {
	type = assign.getType();
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::setType(std::string type_) {
	type = type_;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "The " << type << " makes the wrong animal sound" << std::endl;
}
