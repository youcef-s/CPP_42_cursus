/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:53:05 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 13:30:34 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy) {
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

Intern::~Intern() {
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign) {
	(void) assign;
	return *this;
}

const char * Intern::FormNotFound::what() const throw() {
	return "Form does not exist";
}

Form*	Intern::makeForm(const std::string & form, const std::string & target) {
	std::string	formstr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form*		formptr[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	int	index = -1;
	for (int i = 0; i < 3; i++) {
		if (formstr[i] == form) {
			index = i;
			std::cout << "Intern creates " << form << " form." << std::endl;
		}
		else
			delete formptr[i];
	}
	if (index == -1)
		throw(FormNotFound());
	return (formptr[index]);
}