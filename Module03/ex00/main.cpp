/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:19:35 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/10 21:50:11 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	John("John");
	ClapTrap	James("James");

	std::cout << std::endl;

	John.set_AttackDamage(5);
	James.set_AttackDamage(2);

	John.attack(James.get_Name());
	James.takeDamage(John.get_AttackDamage());
	James.beRepaired(10);
	James.attack(John.get_Name());
	John.takeDamage(James.get_AttackDamage());
	
	std::cout << std::endl;

	std::cout << "James now has " << James.get_HitPoints() << " hit points and "
		<< James.get_EnergyPoints() << " energy points!" << std::endl;
	std::cout << "And John now has " << John.get_HitPoints() << " hit points and "
		<< John.get_EnergyPoints() << " energy points!" << std::endl;
	
	std::cout << std::endl;
	
	John.set_EnergyPoints(0);
	John.attack(James.get_Name());
	
	std::cout << std::endl;

	return (0);
}