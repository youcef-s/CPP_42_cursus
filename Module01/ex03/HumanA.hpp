/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:10:54 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 19:59:19 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&wpn;
	std::string	name;
public:
	HumanA(std::string nameA, Weapon &wpnA);
	~HumanA();
	void attack();
};

#endif