/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:13:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/21 15:17:19 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* joe = new Character("joe");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	joe->equip(tmp);
	tmp = src->createMateria("cure");
	joe->equip(tmp);
	tmp = src->createMateria("ice");
	joe->equip(tmp);
	tmp = src->createMateria("fire");
	joe->equip(tmp);

	ICharacter* bob = new Character("bob");

	joe->unequip(2);

	joe->use(0, *bob);
	joe->use(1, *bob);
	joe->use(2, *bob);

	delete bob;
	delete joe;
	delete src;

	return (0);
}