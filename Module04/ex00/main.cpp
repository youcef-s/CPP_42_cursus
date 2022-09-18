/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:36:17 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/17 17:42:48 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	const WrongAnimal *wanimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	std::cout << std::endl;

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wanimal->getType() << std::endl;
	std::cout << wcat->getType() << std::endl << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	wanimal->makeSound();
	wcat->makeSound();
	
	std::cout << std::endl;

	delete animal;
	delete cat;
	delete dog;
	delete wanimal;
	delete wcat;

	return (0);
}