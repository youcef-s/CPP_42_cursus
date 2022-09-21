/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:36:17 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/21 15:18:28 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {

	const Animal	*animals[4];
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++) {
		std::cout << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

	std::cout << std::endl;

	Dog	basic;
	{
		Dog tmp = basic;
	}

	return (0);
}