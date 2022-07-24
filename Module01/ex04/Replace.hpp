/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:26:34 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 22:10:38 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace
{
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
public:
	Replace(std::string filename, std::string s1, std::string s2);
	~Replace();
	void		ft_replace();
	std::string	replace_line(std::string line);
};

#endif