/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:32:00 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/10/01 16:19:55 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	_N = 0;
}

Span::Span(const Span &copy) {
	_N = copy.getN();
	_vect = copy._vect;
}

Span::Span(unsigned int N) {
	_N = N;
}

Span::~Span() {}

Span & Span::operator=(const Span &assign) {
	_N = assign.getN();
	_vect = assign._vect;
	return *this;
}

unsigned int Span::getN() const {
	return _N;
}

void	Span::addNumber(int nbr) {
	if (_vect.size() == _N)
		throw(std::out_of_range("The container is full!"));
	else
		_vect.push_back(nbr);
}

int	Span::shortestSpan() {
	if (_vect.size() == 0 || _vect.size() == 1)
		throw(std::out_of_range("No Span can be found!"));

	std::sort(_vect.begin(), _vect.end());
	std::vector<int>::iterator	it = _vect.begin();
	int	span = *(it + 1) - *it;
	if (span < 0)
		span = -span;

	for (it = _vect.begin() + 1; it != _vect.end() - 1; ++it) {
		if (*(it + 1) - *it < 0) {
			if (*it - *(it + 1) < span)
				span = *it - *(it + 1);
		}
		else if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;
	}
	return span;
}

int	Span::longestSpan() {
	if (_vect.size() == 0 || _vect.size() == 1)
		throw(std::out_of_range("No Span can be found!"));

	int min = *std::min_element(_vect.begin(), _vect.end());
	int max = *std::max_element(_vect.begin(), _vect.end());
	return max - min;
}

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (static_cast<int>(_N - _vect.size()) < std::distance(start, end))
		throw std::out_of_range("The container cannot hold that much!");
	_vect.insert(_vect.end(), start, end);
}