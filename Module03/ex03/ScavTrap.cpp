/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:56:44 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/12 17:42:53 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "\e[0;31mDefault constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "\e[0;33mConstructor called of ScavTrap "<< get_Name() << "\e[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\e[0;31mDestructor called of ScavTrap "<< get_Name() << "\e[0m" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (get_HitPoints() == 0) {
		std::cout << get_Name() << " ScavTrap is out of hit points!" << std::endl;
		return ;
	}
	if (get_EnergyPoints() == 0) {
		std::cout << get_Name() << " ScavTrap is out of energy points!" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << get_Name() << " attacks " << target 
    << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
	set_EnergyPoints(get_EnergyPoints() - 1);
}

void ScavTrap::guardGate() {
	std::cout << get_Name() << " ScavTrap is now in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
    _Name = copy.get_Name();
    _HitPoints = copy.get_HitPoints();
    _EnergyPoints = copy.get_EnergyPoints();
    _AttackDamage = copy.get_AttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap "<< _Name << "\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign) {
    _Name = assign.get_Name();
    _HitPoints = assign.get_HitPoints();
    _EnergyPoints = assign.get_EnergyPoints();
    _AttackDamage = assign.get_AttackDamage();
    return (*this);
}