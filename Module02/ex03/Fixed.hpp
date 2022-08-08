/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:44:59 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/06 19:11:47 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_fracBits = 8;
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &old);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	void	operator=(Fixed const &old);
	int		operator>(Fixed const &ojb);
	int		operator<(Fixed const &ojb);
	int		operator>=(Fixed const &ojb);
	int		operator<=(Fixed const &ojb);
	int		operator==(Fixed const &ojb);
	int		operator!=(Fixed const &ojb);
	float	operator+(Fixed const &obj);
	float	operator-(Fixed const &obj);
	float	operator*(Fixed const &obj);
	float	operator/(Fixed const &obj);
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	static Fixed &min(Fixed &obj1, Fixed &obj2);
	static Fixed &min(const Fixed &obj1, const Fixed &obj2);
	static Fixed &max(Fixed &obj1, Fixed &obj2);
	static Fixed &max(const Fixed &obj1,const Fixed &obj2);
	
};

std::ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint);

#endif