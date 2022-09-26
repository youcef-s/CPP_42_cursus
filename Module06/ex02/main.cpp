/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:31:20 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/26 16:02:43 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

	Base*	inst[3] = {new A, new B, new C};
	int idx;
	srand(time(NULL));
	int	randNbr = rand() % 3;

	for(int i = 0; i < 3; ++i) {
		if (i == randNbr) {
			idx = randNbr;
			continue;
		}
		delete inst[i];
	}
	return inst[idx];
}

void identify(Base* p) {
	std::cout << "The actual type of the object is \"";
	if (dynamic_cast<A*>(p))
		std::cout << "A\"" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B\"" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C\"" << std::endl;
	else
		std::cout << "Unknown\"" << std::endl;
}

void identify(Base& p) {
	Base	var;
	std::cout << "The actual type of the object is \"";
	try {
		var = dynamic_cast<A&>(p);
		std::cout << "A\"" << std::endl;
	}
	catch(std::exception &e) {
		try {
			var = dynamic_cast<B&>(p);
			std::cout << "B\"" << std::endl;
		}
		catch(std::exception &e) {
			try {
				var = dynamic_cast<C&>(p);
				std::cout << "C\"" << std::endl;
			}
			catch(std::exception &e) {
				std::cout << "Unknown\"" << std::endl;
			}
		}
	}
}

int	main(void) {
	Base*	unvalidPtr = new Base;
	Base*	validPtr = generate();
	Base&	validRef = *validPtr;
	Base&	unvalidRef = *unvalidPtr;

	identify(validPtr);
	identify(validRef);
	identify(unvalidPtr);
	identify(unvalidRef);

	delete unvalidPtr;
	delete validPtr;

	return (0);
}