/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:28:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 21:33:50 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "4 arguments are required"	<< std::endl;
		return (1);
	}
	Replace	instance(av[1], av[2], av[3]);
	instance.ft_replace();
	return (0);
}