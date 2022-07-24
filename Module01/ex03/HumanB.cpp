/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:11:48 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 20:02:42 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameB) : wpn(NULL) , name(nameB) {}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}

void 	HumanB::setWeapon(Weapon &wpnB) {
	wpn = &wpnB;
}
