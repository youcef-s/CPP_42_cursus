/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:07:17 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/26 12:18:14 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	main(int ac, char **av) {

	if (ac == 2) {
		Converter	obj(av[1]);

		obj.convertToChar();
		obj.convertToInt();
		obj.convertToFloat();
		obj.convertToDouble();
	}
	return (0);
}