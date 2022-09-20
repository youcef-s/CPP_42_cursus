/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:13:52 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/20 17:30:18 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy) {
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::~Cure() {
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}

Cure & Cure::operator=(const Cure &assign) {
	(void) assign;
	return *this;
}

Cure* Cure::clone() const {
	Cure*	clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
