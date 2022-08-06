/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:46:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/06 19:48:14 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed const &old) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

void	Fixed::operator=(Fixed const &old) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = old.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (_value);
}

void Fixed::setRawBits( int const raw ) {
	_value = raw;
}

Fixed::Fixed(const int i) {
	_value = i << _fracBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	_value = roundf(f * 256);
	std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const {
	return ((float)_value / 256);
}

int	Fixed::toInt( void ) const {
	return (_value >> _fracBits);	
}

std::ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint) {
	outputStream << fixedPoint.toFloat();
	return (outputStream);
}
