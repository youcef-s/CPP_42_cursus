/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:29:13 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/25 14:50:53 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	harl;
	
	std::cout << "\033[0;32mDEBUG level:\033[0m" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\033[0;32mInfo level:\033[0m" << std::endl;
	harl.complain("INFO");
	std::cout << "\033[0;32mWARNING level:\033[0m" << std::endl;
	harl.complain("WARNING");
	std::cout << "\033[0;32mERROR level:\033[0m" << std::endl;
	harl.complain("ERROR");
	std::cout << "\033[0;32mUnvalid level:\033[0m" << std::endl;
	harl.complain("HEY");
	return (0);
}