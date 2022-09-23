/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:44:10 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 13:13:26 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		Form();
		Form(const Form &copy);
		Form(const std::string Name, const int GradeToSign, const int GradeToExecute);
		virtual ~Form();
		Form & operator=(const Form &assign);

		const std::string	getName() const;
		bool				getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		class FormNotSigned : public std::exception {
			virtual const char* what() const throw();
		};

		void	beSigned(const Bureaucrat & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_Name;
		bool				_Signed;
		const int			_GradeToSign;
		const int			_GradeToExecute;
		
};

std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif