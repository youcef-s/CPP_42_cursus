/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:11:33 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/10/01 14:20:12 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;
	std::list<int>		lst;

	mstack.push(5); lst.push_back(5);
	mstack.push(17); lst.push_back(17);

	std::cout << mstack.top() << "\t" << lst.back() << std::endl;

	mstack.pop(); lst.pop_back();

	std::cout << mstack.size() << "\t" << lst.size() << std::endl;

	mstack.push(3); lst.push_back(3);
	mstack.push(5); lst.push_back(5);
	mstack.push(737); lst.push_back(737);
	mstack.push(0); lst.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::list<int>::iterator	lstb = lst.begin();
	std::list<int>::iterator	lste = lst.end();

	++it; ++lstb;
	--it; --lstb;

	while (it != ite && lstb != lste)
	{
		std::cout << *it << "\t" << *lstb << std::endl;
		++lstb;
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}
