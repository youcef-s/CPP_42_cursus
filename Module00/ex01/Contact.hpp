/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:22:48 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/21 20:17:33 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <sstream>

class Contact
{
private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_DarkestSecret;
	std::string	_PhoneNumber;
	int			_Index;
public:
	Contact();
	~Contact();
	int		AddContact(int	nbr);
	void	PrintRow(void);
	void	PrintColumn(std::string str);
	void	PrintInfo(void);
};

#endif