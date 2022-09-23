/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:44 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 14:13:19 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getTarget(), 145, 137) {
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
	_target = target;
	std::cout << "\e[0;33mConstructor called of ShrubberyCreationForm "<< _target << "\e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm " << _target << "\e[0m" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
	_target = assign.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::setTarget(std::string target) {
	_target = target;
}

const char* ShrubberyCreationForm::FileError::what() const throw() {
	return "Could not open file";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream	file;

	if (executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	if (!getSigned())
		throw (FormNotSigned());
	file.open(_target + "_shrubbery");
	if (!file.is_open() || !file.good())
		throw (FileError());
	file << "                                           " << std::endl;
	file << "    	      # #### ####                   " << std::endl;
	file << "          ### //#|### |/####               " << std::endl;
	file << "         ##//#/ /||/##/_/##/_#             " << std::endl;
	file << "       ###  //###|/ // # ###               " << std::endl;
	file << "     ##_/_#/_/## | #/###_/_####            " << std::endl;
	file << "    ## #### # / #| /  #### ##/##           " << std::endl;
	file << "     __#_--###`  |{,###---###-~            " << std::endl;
	file << "                |}{                		" << std::endl;
	file << "                }}{                        " << std::endl;
	file << "                }}{                        " << std::endl;
	file << "                {{}                        " << std::endl;
	file << "          , -=-~{ .-^- _                   " << std::endl;
	file << "                `}                         " << std::endl;
	file << "                 {                         " << std::endl;
	file << "                                           " << std::endl;

}
