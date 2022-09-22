/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:02:57 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 15:26:04 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	try {

		Form		form("Form1", 10, 10);
		Bureaucrat	joe("Joe", 10);
		Bureaucrat	johnny("Johnny", 5);
		Bureaucrat	john("John", 20);

		joe.signForm(form);
		johnny.signForm(form);
		john.signForm(form);

	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}