/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:36:31 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/30 18:59:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <string>

class Span {
	public:
		Span();
		Span(const Span &copy);
		Span(unsigned int N);
		~Span();
		Span & operator=(const Span &assign);

		unsigned int getN() const;

		void	addNumber(int nbr);
		int		shortestSpan();
		int		longestSpan();
		void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

	private:
		std::vector<int> _vect;
		unsigned int _N;

};

#endif