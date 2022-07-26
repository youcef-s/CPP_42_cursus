/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:09:47 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 19:16:12 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string WeaponType) {
	type = WeaponType;
}
