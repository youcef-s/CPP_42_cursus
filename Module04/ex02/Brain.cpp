/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:21 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 16:44:38 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

Brain::~Brain() {
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

Brain & Brain::operator=(const Brain &assign) {
	for(int i = 0; i < 100; i++) {
		this->ideas[i] = assign.ideas[i];
	}
	return *this;
}
