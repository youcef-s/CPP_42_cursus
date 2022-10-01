/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:12:02 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/10/01 14:31:05 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>
# include <list>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack<T, C> & copy) : std::stack<T, C>::stack(copy) {}
	MutantStack<T, C> & operator=(const MutantStack<T, C> & assign) {
		std::stack<T, C>::operator=(assign);
		return *this;
	}

	typedef typename std::stack<T, C>::container_type::iterator	iterator;
	typedef typename std::stack<T, C>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T, C>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T, C>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin() { return this->c.begin(); }
	reverse_iterator		rbegin() { return this->c.rbegin(); }
	const_iterator			cbegin() { return this->c.cbegin(); }
	const_reverse_iterator	crbegin() { return this->c.crbegin(); }

	iterator				end() { return this->c.end(); }
	reverse_iterator		rend() { return this->c.rend(); }
	const_iterator			cend() { return this->c.cend(); }
	const_reverse_iterator	crend() { return this->c.crend(); }

};

#endif