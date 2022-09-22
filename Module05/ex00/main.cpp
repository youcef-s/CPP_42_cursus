/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:02:57 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/22 13:47:47 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	try {
		Bureaucrat	a("Joe", 10);
		Bureaucrat	b("Jordan", 150);

		a.IncrementGrade();
		std::cout << a << b;
		b.DecrementGrade();
	}
	catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
	}

	return (0);
}