/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:12:43 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/18 17:51:02 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal {
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat & operator=(const Cat &assign);

		void	makeSound() const;
};

#endif