/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:06:38 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 18:00:11 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {
	_target = target;
	std::cout << "\e[0;33mConstructor called of RobotomyRequestForm " << _target << "\e[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm " << _target << "\e[0m" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
	_target = assign.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	return _target;
}

void RobotomyRequestForm::setTarget(std::string target) {
	_target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	(void) executor;
}
