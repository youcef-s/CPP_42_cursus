/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:19:35 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/11 16:55:22 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap	John("John");
	ScavTrap	James("James");

	std::cout << std::endl;

	James.attack(John.get_Name());
	John.attack(James.get_Name());

	std::cout << std::endl;

	James.set_EnergyPoints(1);
	James.attack(John.get_Name());
	James.attack(John.get_Name());

	std::cout << std::endl;

	James.guardGate();

	std::cout << std::endl;

	return (0);
}