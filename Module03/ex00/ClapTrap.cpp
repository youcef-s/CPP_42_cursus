/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:30:35 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/10 21:31:37 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) {
    _Name = name;
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
	std::cout << "\e[0;33mConstructor called of ClapTrap "<< _Name << "\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    _Name = copy.get_Name();
    _HitPoints = copy.get_HitPoints();
    _EnergyPoints = copy.get_EnergyPoints();
    _AttackDamage = copy.get_AttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap "<< _Name << "\e[0m" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\e[0;31mDestructor called of ClapTrap "<< _Name << "\e[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign) {
    _Name = assign.get_Name();
    _HitPoints = assign.get_HitPoints();
    _EnergyPoints = assign.get_EnergyPoints();
    _AttackDamage = assign.get_AttackDamage();
    return (*this);
}

std::string ClapTrap::get_Name() const {
    return (_Name);
}

void ClapTrap::set_Name(std::string name) {
    _Name = name;
}

int ClapTrap::get_HitPoints() const {
    return (_HitPoints);
}
void ClapTrap::set_HitPoints(int hitPoints) {
    _HitPoints = hitPoints;
}

int ClapTrap::get_EnergyPoints() const {
    return (_EnergyPoints);
}

void ClapTrap::set_EnergyPoints(int energyPoints) {
    _EnergyPoints = energyPoints;
}

int ClapTrap::get_AttackDamage() const {
    return (_AttackDamage);
}

void ClapTrap::set_AttackDamage(int attackDamage) {
    _AttackDamage = attackDamage;
}

void ClapTrap::attack(std::string const & target)
{
	if (_HitPoints == 0) {
		std::cout << this->get_Name() << " is out of hit points!" << std::endl;
		return ;
	}
	if (_EnergyPoints == 0) {
		std::cout << this->get_Name() << " is out of energy points!" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << _Name << " attacks " << target 
    << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
	_EnergyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _Name << " lost " << amount << " hit points!"  << std::endl;
	_HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints == 0) {
		std::cout << this->get_Name() << " is out of energy points!" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << _Name << " has been repaired, getting " << amount << " hit points!" << std::endl;
	_HitPoints += amount;
	_EnergyPoints--;
}
