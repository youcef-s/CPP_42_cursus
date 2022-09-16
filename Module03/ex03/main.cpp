/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:19:35 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/16 17:32:46 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {

	DiamondTrap	Jerry("Jerry");
	Jerry.whoAmI();
	Jerry.attack("Bob");

	return (0);
}