/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:36:40 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 20:44:23 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie*	zombies = new(std::nothrow) Zombie[N];
	if (zombies == NULL) {
		std::cout << "Allocation problem" << std::endl;
		exit (1);
	}
	if (N < 0)
		return (NULL);
	std::stringstream	ss;
	for (int i = 0; i < N ; i++) {
		ss << i;
		zombies[i].setName(name + ss.str());
		ss.str("");
	}
	return (zombies);
}
