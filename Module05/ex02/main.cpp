/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:02:57 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 18:42:29 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	try {
		ShrubberyCreationForm a("tree");
		Bureaucrat	b("Joe", 10);
		a.beSigned(b);
		a.execute(b);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}