/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:46:53 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 11:54:50 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);

		const std::string	getName() const;
		int					getGrade() const;
		
		void	IncrementGrade();
		void	DecrementGrade();

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		
		void	signForm(Form & form);
		void	executeForm(Form const & form);

	private:
		const std::string	_Name;
		int					_Grade;
		
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif