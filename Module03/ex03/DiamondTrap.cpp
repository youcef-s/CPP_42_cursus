/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:00:43 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/16 18:14:03 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "\e[0;31mDefault constructor called of DiamondTrap\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) 
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	_name = name;
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "\e[0;33mConstructor called of DiamondTrap "<<	_name << "\e[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\e[0;31mDestructor called of DiamondTrap "<< _name << "\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
    _Name = copy.get_Name();
    _HitPoints = copy.get_HitPoints();
    _EnergyPoints = copy.get_EnergyPoints();
    _AttackDamage = copy.get_AttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of DiamondTrap "<< _Name << "\e[0m" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign) {
    _Name = assign.get_Name();
    _HitPoints = assign.get_HitPoints();
    _EnergyPoints = assign.get_EnergyPoints();
    _AttackDamage = assign.get_AttackDamage();
    return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am the DiamondTrap " << _name <<
		" son of the ClapTrap " << ClapTrap::_Name << std::endl;
}