/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:11:55 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/07/24 20:02:23 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*wpn;
	std::string	name;
public:
	HumanB(std::string nameB);
	~HumanB();
	void attack();
	void setWeapon(Weapon &wpn);
};

#endif