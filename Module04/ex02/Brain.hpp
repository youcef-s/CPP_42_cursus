/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:27 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 16:21:31 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain & operator=(const Brain &assign);
};

#endif