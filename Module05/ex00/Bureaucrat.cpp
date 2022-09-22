#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _Grade(grade) {
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	std::cout << "\e[0;33mConstructor called of Bureaucrat " << _Name << "\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	_Grade = copy.getGrade();
	if (_Grade < 1)
		throw (GradeTooHighException());
	if (_Grade > 150)
		throw (GradeTooLowException());
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\e[0;31mDestructor called of Bureaucrat " << _Name << "\e[0m" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign) {
	_Grade = assign.getGrade();
	if (_Grade < 1)
		throw (GradeTooHighException());
	if (_Grade > 150)
		throw (GradeTooLowException());
	return *this;
}

const std::string Bureaucrat::getName() const {
	return _Name;
}

int Bureaucrat::getGrade() const {
	return _Grade;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

void	Bureaucrat::IncrementGrade() {
	_Grade--;
	if (_Grade < 1)
		throw (GradeTooHighException());
	if (_Grade > 150)
		throw (GradeTooLowException());
}

void	Bureaucrat::DecrementGrade() {
	_Grade++;
	if (_Grade < 1)
		throw (GradeTooHighException());
	if (_Grade > 150)
		throw (GradeTooLowException());
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object) {
	stream << object.getName() << ", bureaucrat grade " << object.getGrade() << std::endl;
	return stream;
}
