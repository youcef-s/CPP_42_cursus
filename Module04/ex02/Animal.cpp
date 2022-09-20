/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:47:36 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/17 18:18:34 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	type = "Some animal";
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy) {
	type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}

Animal::~Animal() {
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

Animal & Animal::operator=(const Animal &assign) {
	type = assign.getType();
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::setType(std::string type_) {
	type = type_;
}

void	Animal::makeSound(void) const {
	std::cout << type << " makes a sound" << std::endl;
}
