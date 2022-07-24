/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:53:07 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 20:54:02 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie*	zombie;

	zombie = new(std::nothrow) Zombie(name);
	if (zombie == NULL) {
		std::cout << "allocation problem" << std::endl;
		exit (1);
	}
	return (zombie);
}
