/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:02:57 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/23 14:18:48 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {

	try {
		ShrubberyCreationForm	TreePlant("tree");
		PresidentialPardonForm	Pardon("Jimmy");
		RobotomyRequestForm		Robotomize("George");
		Bureaucrat				Joe("Joe", 5);

		TreePlant.beSigned(Joe);
		Pardon.beSigned(Joe);
		Robotomize.beSigned(Joe);

		Joe.executeForm(TreePlant);
		std::cout << std::endl;
		Joe.executeForm(Pardon);
		std::cout << std::endl;
		Joe.executeForm(Robotomize);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}