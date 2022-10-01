/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:59:36 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/10/01 14:23:12 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <array>
# include <deque>
# include <list>

template <typename T> void easyfind(T & container, int i) {
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::logic_error("No occurrence is found!");
	else
		std::cout << i << " occurred in the container!" << std::endl;
}

#endif