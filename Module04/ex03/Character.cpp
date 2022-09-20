/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:13:46 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/20 18:55:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy) {
	_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
		_slot[i] = copy._slot[i]->clone();
	}
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}

Character::~Character() {
	for (int i =0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
	}
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}

Character & Character::operator=(const Character &assign) {
	_name = assign._name;
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
		_slot[i] = assign._slot[i]->clone();
	}
	return *this;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "\e[0;33mConstructor called of Character " << _name << "\e[0m" << std::endl;
}

std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (!_slot[i]) {
			_slot[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !_slot[idx])
		return ;
	_slot[idx]->use(target);
}