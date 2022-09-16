/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:19:35 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/16 12:12:53 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	ClapTrap	John("John");
	FragTrap	James("James");

	std::cout << std::endl;

	FragTrap("Johnny");
	
	std::cout << std::endl;

	James.highFivesGuys();

	std::cout << std::endl;

	return (0);
}