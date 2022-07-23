/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:03:49 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/23 18:22:15 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void) {
	Zombie*	zombie;
	
	randomChump("ZombieOnTheStack");
	zombie = newZombie("ZombieOnHeap");
	zombie->announce();
	delete zombie;
	return (0);
}