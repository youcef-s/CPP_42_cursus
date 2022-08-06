/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:46:09 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/06 19:24:10 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_value = 0;
}

Fixed::Fixed(Fixed const &old) {
	*this = old;
}

void	Fixed::operator=(Fixed const &old) {
	this->_value = old.getRawBits();
}

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const {
	return (_value);
}

void Fixed::setRawBits( int const raw ) {
	_value = raw;
}

Fixed::Fixed(const int i) {
	_value = i << _fracBits;
}

Fixed::Fixed(const float f) {
	_value = roundf(f * 256);
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

/*
**	comparaison operators overloaded
*/

int	Fixed::operator<(Fixed const &obj) {
	if (_value < obj._value)
		return (1);
	else
		return (0);
}

int	Fixed::operator>(Fixed const &obj) {
	if (_value > obj._value)
		return (1);
	else
		return (0);
}

int	Fixed::operator<=(Fixed const &obj) {
	if (_value <= obj._value)
		return (1);
	else
		return (0);
}

int	Fixed::operator>=(Fixed const &obj) {
	if (_value >= obj._value)
		return (1);
	else
		return (0);
}

int	Fixed::operator==(Fixed const &obj) {
	if (_value == obj._value)
		return (1);
	else
		return (0);
}

int	Fixed::operator!=(Fixed const &obj) {
	if (_value != obj._value)
		return (1);
	else
		return (0);
}

/*
**	arithmetic operators overloaded
*/

float	Fixed::operator+(Fixed const &obj) {
	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator-(Fixed const &obj) {
	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator*(Fixed const &obj) {
	return (this->toFloat() * obj.toFloat());
}

float	Fixed::operator/(Fixed const &obj) {
	return (this->toFloat() / obj.toFloat());
}

/*
**	increment/decrement operators overloaded
*/

Fixed	Fixed::operator++() {
	++(this->_value);
	return (*this);
}

Fixed	Fixed::operator--() {
	--(this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;
	tmp._value = (this->_value)++;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;
	tmp._value = (this->_value)--;
	return (tmp);
}

/*
**	min and max overloaded member functions
*/

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
	if (obj1 < obj2)
		return (obj1);
	else
		return(obj2);
}

Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2) {
	if ((Fixed)obj1 < (Fixed)obj2)
		return ((Fixed &)obj1);
	else
		return((Fixed &)obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
	if (obj1 > obj2)
		return (obj1);
	else
		return(obj2);
}

Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2) {
	if ((Fixed)obj1 > (Fixed)obj2)
		return ((Fixed &)obj1);
	else
		return((Fixed &)obj2);
}
