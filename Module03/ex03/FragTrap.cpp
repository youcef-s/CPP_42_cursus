/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:58:38 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/12 17:47:33 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "\e[0;31mDefault constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "\e[0;33mConstructor called of FragTrap "<< get_Name() << "\e[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\e[0;31mDestructor called of FragTrap "<< get_Name() << "\e[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High Fives!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
    _Name = copy.get_Name();
    _HitPoints = copy.get_HitPoints();
    _EnergyPoints = copy.get_EnergyPoints();
    _AttackDamage = copy.get_AttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of FragTrap "<< _Name << "\e[0m" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign) {
    _Name = assign.get_Name();
    _HitPoints = assign.get_HitPoints();
    _EnergyPoints = assign.get_EnergyPoints();
    _AttackDamage = assign.get_AttackDamage();
    return (*this);
}