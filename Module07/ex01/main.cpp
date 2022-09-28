/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:28:34 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/28 17:39:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {

	int			intArr[] = {0, 1, 2, 3, 4, 5};
	float		floatArr[] = {0.5f, 1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
	char		charArr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	std::string	stringArr[] = {"hello", "there", "!"};

	iter(intArr, 6, &display);
	std::cout << std::endl;

	iter(floatArr, 6, &display);
	std::cout << std::endl;

	iter(charArr, 6, &display);
	std::cout << std::endl;

	iter(stringArr, 3, &display);
	std::cout << std::endl;

	return 0;
}