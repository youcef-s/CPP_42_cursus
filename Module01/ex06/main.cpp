/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:03:26 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/25 16:26:34 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "2 arguments are required" << std::endl;
		return (1);
	}
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	Harl		harl;
	while (i < 4) {
		if (levels[i] == av[1])
			break ;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
			i++;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			i++;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			i++;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}