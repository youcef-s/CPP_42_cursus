/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:10:47 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 19:59:30 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon &wpnA) : wpn(wpnA), name(nameA) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}
