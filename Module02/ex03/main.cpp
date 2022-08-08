/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:44:06 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/08 15:03:16 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point const a(0, 0);
	Point const b(20, 0);
	Point const c(10, 30);
	Point const p(10, 15);
	if (bsp(a, b, c, p))
		std::cout << "The point is \033[01;32minside\033[00m the triangle" << std::endl;
	else
		std::cout << "The point is \033[01;32moutside\033[00m the triangle" << std::endl;
	
	return 0;
}
