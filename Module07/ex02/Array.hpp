/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:06:51 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/28 18:08:32 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array {
	private:
		T	*_arr;
		int	_size;

	public:
		Array(){
			_size = 0;
			_arr = NULL;
		}
		Array(unsigned int n){
			_size = n;
			_arr = new(std::nothrow) T[n]();
			if (!_arr)
				exit(1);
		}
		Array(const Array & copy){
			_size = 0;
			*this = copy;
		}
		Array & operator=(const Array & assign) {
			if (_size)
				delete[] _arr;
			_size = assign._size;
			_arr = new(std::nothrow) T[_size];
			if (!_arr)
				exit(1);
			for(int i = 0; i < _size; ++i)
				_arr[i] = assign._arr[i];
			return *this;
		}
		int	size() {
			return _size;
		}
		~Array(){
			if(_size)
				delete[] _arr;
		}
		T & operator[](int i) {
			if (i < 0 || i >= _size)
				throw (std::exception());
			return _arr[i];
		}
};

#endif