/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:05:43 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/25 13:56:43 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>

class Converter
{
	public:
		Converter();
		Converter(const Converter &copy);
		Converter(std::string Input);
		~Converter();
		Converter & operator=(const Converter &assign);

		void	convertToInt();
		void	convertToChar();
		void	convertToFloat();
		void	convertToDouble();

	private:
		std::string _Input;

};

#endif