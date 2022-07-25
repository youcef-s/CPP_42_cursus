/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:28:47 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/25 17:26:35 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my " <<
	"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money." <<
	" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free." <<
	" I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
	int	i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
	void (Harl::*funptr[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	while (i < 4) {
		if (level == levels[i])
			break;
		i++;
	}
	if (i >=0 && i <= 3) {
		(this->*funptr[i])();
	}
	else
		std::cout << "Available levels: DEBUG, INFO, WARNING and ERROR"<< std::endl;
}
