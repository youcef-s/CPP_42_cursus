/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:46 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 16:58:02 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	brain = NULL;
	*this = copy;
}

Dog::~Dog() {
	delete brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

Dog & Dog::operator=(const Dog &assign) {
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *(assign.brain);
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "The " << type << " barks" << std::endl;
}
