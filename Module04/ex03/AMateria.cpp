/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:13:38 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/20 18:54:05 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &assign) {
	(void) assign;
	return *this;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "\e[0;33mConstructor called of AMateria " << _type << "\e[0m" << std::endl;
}

std::string const & AMateria::getType() const {
	return (_type);
}
