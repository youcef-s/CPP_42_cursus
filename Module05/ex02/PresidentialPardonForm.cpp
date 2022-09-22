/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:10:26 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 18:44:18 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {
	_target = target;
	std::cout << "\e[0;33mConstructor called of PresidentialPardonForm " << _target << "\e[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm " << _target << "\e[0m" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
	_target = assign.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}

void PresidentialPardonForm::setTarget(std::string target) {
	_target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	if (!getSigned())
		throw (FormNotSigned());
	std::cout << _target << " Has been pardoned by Zaphod Beeblebrox." << std::endl;
}
