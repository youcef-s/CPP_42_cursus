/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:22:54 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/21 20:48:34 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_Contacts[8];
	int		_NbrOfContacts;
public:
	PhoneBook();
	~PhoneBook();
	int		add();
	void	search(int nbr);
	void	display(int nbr);
};

#endif
