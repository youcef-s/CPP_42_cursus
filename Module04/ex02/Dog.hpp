/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:52 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 17:50:54 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal {
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog & operator=(const Dog &assign);

		void	makeSound() const;
};

#endif