/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:27:54 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/28 17:39:32 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T *arr, int len, void (*func)(T const &elem)) {
	for(int i = 0; i < len; i++) {
		(*func)(arr[i]);
	}
}

template <typename T> void display(T & elem) {
	std::cout << elem << " ";
}

#endif