/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:44:15 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 14:33:01 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _Name(""), _Signed(0), _GradeToSign(0), _GradeToExecute(0) {
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy)
: _Name(copy._Name), _Signed(copy._Signed), _GradeToSign(copy._GradeToSign), _GradeToExecute(copy._GradeToExecute) {
	std::cout << "\e[0;33mCopy Constructor called of Form " << _Name << "\e[0m" << std::endl;
}

Form::Form(const std::string Name, const int GradeToSign, const int GradeToExecute)
: _Name(Name), _Signed(0), _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute) {
	std::cout << "\e[0;33mConstructor called of Form " << _Name << "\e[0m" << std::endl;
}

Form::~Form() {
	std::cout << "\e[0;31mDestructor called of Form " << _Name << "\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign) {
	_Signed = assign._Signed;
	return *this;
}

const std::string Form::getName() const {
	return _Name;
}
bool Form::getSigned() const {
	return _Signed;
}

int Form::getGradeToSign() const {
	return _GradeToSign;
}

int Form::getGradeToExecute() const {
	return _GradeToExecute;
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}
const char * Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

void	Form::beSigned(const Bureaucrat & bureaucrat) {
		if (bureaucrat.getGrade() <= getGradeToSign())
			_Signed = 1;
		else
			throw (GradeTooLowException());
}

std::ostream & operator<<(std::ostream &stream, const Form &object) {
	stream << object.getName() << " requires " << object.getGradeToSign() << " grade to be signed and "
	<< object.getGradeToExecute() << " to be executed" << std::endl;
	if (object.getSigned())
		stream << object.getName() << " is Signed" << std::endl;
	else
		stream << object.getName() << " is not Signed" << std::endl;
	return stream;
}
