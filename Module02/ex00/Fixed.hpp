/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:44:59 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/08/06 19:49:51 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_fracBits = 8;
public:
	Fixed();
	Fixed(const Fixed &old);
	void	operator=(Fixed const &old);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif