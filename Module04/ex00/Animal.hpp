/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:47:40 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/17 18:19:06 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal & operator=(const Animal &assign);

		std::string getType() const;
		void setType(std::string type_);

		virtual void	makeSound() const;
		
	protected:
		std::string type;	
};

#endif