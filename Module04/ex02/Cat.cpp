/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:40 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 16:22:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) {
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	brain = NULL;
	*this = copy;
}

Cat::~Cat() {
	delete brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &assign) {
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *(assign.brain);
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "The " << type << " meows" << std::endl;
}
