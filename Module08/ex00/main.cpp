/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:59:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/30 17:17:14 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	
	std::array<int,3>	arr = {0, 1, 2};
	std::vector<int>	vect(arr.begin(), arr.end());
	std::deque<int>		que(arr.begin(), arr.end());
	std::list<int>		lst(arr.begin(), arr.end());

	try {
		for(int i = 0; i < 4; ++i)
			easyfind(vect, i);
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		for(int i = 0; i < 4; ++i)
			easyfind(arr, i);
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		for(int i = 0; i < 4; ++i)
			easyfind(que, i);
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		for(int i = 0; i < 4; ++i)
			easyfind(lst, i);
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}