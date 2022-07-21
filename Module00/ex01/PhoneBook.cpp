/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:21:22 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/21 21:13:07 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	PhoneBook::_NbrOfContacts = 0;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int	PhoneBook::add(void) {
	int	n;

	std::cout << "------- Adding a Contact -------" << std::endl;
	if (this->_NbrOfContacts < 8) {
		n = this->_Contacts[this->_NbrOfContacts].AddContact(this->_NbrOfContacts);
		if (n == 1) {
			std::cout << "Your contact can't have empty fields!" << std::endl;
			return (1);
		}
		this->_NbrOfContacts++;
	}
	else {
		this->_Contacts[0].AddContact(0);
		this->_NbrOfContacts = 1;
	}
	return (0);
}

void	PhoneBook::display(int nbr) {
	std::string			str;
	int					num;
	std::stringstream	ss;
	
	std::cout << "\033[33m"	<< "Which Contact you want more info about?" << "\033[0m" << std::endl;
	getline(std::cin, str);
	ss << str;
	num = 0;
	if (str.length() != 0) {
		for (int i = 0; str[i] != '\0'; i++) {
			if (std::isdigit(str[i]) == 0) {
				std::cout << "\033[31m"	<< "You should have entered a number." << "\033[0m" << std::endl;
				return ;
			}
		}
		ss >> num;
		if (num != 0 && num <= nbr)
			this->_Contacts[num - 1].PrintInfo();
		else
			std::cout << "\033[31m" << "There is no such contact." << std::endl;
	}
	else if (!std::cin.eof()) {
		std::cout << "\033[31m" << "Please enter a valid index of a contact." << std::endl;
		this->display(nbr);
	}
}

void	PhoneBook::search(int nbr) {
	int	i = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < nbr) {
		this->_Contacts[i].PrintRow();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	this->display(nbr);
}

int	main(void) {
	std::string	command;
	PhoneBook	phonebook;
	int			NbrOfRows;

	NbrOfRows = 0;
	while (1) {
		std::cout << "\033[32m"	<< "What do you wish to do?" << "\033[0m" << std::endl;
		getline(std::cin, command);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return (1);
		}
		if (command == "ADD") {
			if (phonebook.add() == 1)
				continue ;
			if (NbrOfRows != 8)
				NbrOfRows++;
		}
		else if (command == "SEARCH")
			phonebook.search(NbrOfRows);
		else if (command == "EXIT") {
			std::cout << "Goodbye!!" << std::endl;
			return (0);
		}
		else
			std::cout << "\033[31m"	<< "Unvalid command!" << "\033[0m" << std::endl;
	}
	return (0);
}
