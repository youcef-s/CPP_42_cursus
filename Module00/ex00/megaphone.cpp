/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:27:31 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/20 13:54:18 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	int	i = 0;
	int	j;
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[++i]) {
		j = -1;
		while (av[i][++j])
			std::cout << (char)toupper(av[i][j]);
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
