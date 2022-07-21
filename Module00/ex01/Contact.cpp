/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:22:44 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/21 20:46:19 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	Contact::_FirstName = "";
	Contact::_LastName = "";
	Contact::_NickName = "";
	Contact::_DarkestSecret = "";
	Contact::_PhoneNumber = "";
	Contact::_Index = 0;
}

Contact::~Contact(void) {
	return ;
}

int	Contact::AddContact(int nbr) {
	this->_Index = nbr + 1;
	std::cout << "First Name: ";
	getline(std::cin, this->_FirstName);
	std::cout << "Last Name: ";
	getline(std::cin, this->_LastName);
	std::cout << "NickName: ";
	getline(std::cin, this->_NickName);
	std::cout << "Phone Number: ";
	getline(std::cin, this->_PhoneNumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->_DarkestSecret);

	if (_FirstName.length() == 0 ||  _LastName.length() == 0 ||
	_NickName.length() == 0 || _PhoneNumber.length() == 0 || _DarkestSecret.length() == 0)
		return (1);
	return (0);
}

void	Contact::PrintColumn(std::string str) {
	int	i;
	int	size;

	i = -1;
	size = str.length();
	while (++i + size < 10)
		std::cout << " ";
	if (size > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << str;
}

void	Contact::PrintRow(void) {
	std::cout << "|" << "         " << this->_Index << "|";
	PrintColumn(Contact::_FirstName);
	std::cout << "|";
	PrintColumn(Contact::_LastName);
	std::cout << "|";
	PrintColumn(Contact::_NickName);
	std::cout << "|" << std::endl;
}

void	Contact::PrintInfo(void) {
	std::cout << "Index: " << _Index << std::endl;
	std::cout << "First Name: " << _FirstName << std::endl;
	std::cout << "Last Name: " << _LastName << std::endl;
	std::cout << "NickName: " << _NickName << std::endl;
	std::cout << "Phone Number: " << _PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _DarkestSecret << std::endl;
}