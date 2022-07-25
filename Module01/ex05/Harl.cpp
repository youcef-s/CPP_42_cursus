/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:28:47 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/25 15:05:45 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl();
	~Harl();
	void complain( std::string level );
};

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
