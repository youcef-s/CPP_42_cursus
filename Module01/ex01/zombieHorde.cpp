/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:36:40 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/23 19:51:58 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie*	zombies = new Zombie[N];
	std::stringstream	ss;
	
	if (N < 0)
		return (NULL);
	for (int i = 0; i < N ; i++) {
		ss << i;
		zombies[i].setName(name + ss.str());
		ss.str("");
	}
	return (zombies);
}
