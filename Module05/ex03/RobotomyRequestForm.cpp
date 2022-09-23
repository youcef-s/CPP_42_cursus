/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:06:38 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 14:13:00 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy.getTarget(), 72, 45) {
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
	if (executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	if (!getSigned())
		throw (FormNotSigned());

	srand(time(NULL));
	unsigned int	random = rand() % 2;
	if (random)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " has failed to get robotomized." << std::endl;
}
