/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:12:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/21 13:24:36 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_slot[i] = NULL;
	}
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
		_slot[i] = copy._slot[i]->clone();
	}
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
	}
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign) {
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
		_slot[i] = assign._slot[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_slot[i]) {
			std::cout << m->getType() << " learned" << std::endl;
			_slot[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_slot[i] && _slot[i]->getType() == type) {
			std::cout << _slot[i]->getType() << " Materia has been created!" << std::endl;
			return (_slot[i]->clone());
		}
	}
	std::cout << type << " Materia not found!" << std::endl;
	return (NULL);
}