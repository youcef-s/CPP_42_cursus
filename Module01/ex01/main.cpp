/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:04:24 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/23 19:54:05 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int	main(void) {
	Zombie	*zombies;

	zombies = zombieHorde(4, "zombie");
	for (int i = 0; i < 4 ; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}