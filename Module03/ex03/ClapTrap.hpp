/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:30:32 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/16 12:04:55 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &copy);
	
		~ClapTrap();
		
		ClapTrap & operator=(const ClapTrap &assign);
		
		std::string	get_Name() const;
		void		set_Name(std::string name);
		int			get_HitPoints() const;
		void		set_HitPoints(int hitPoints);
		int			get_EnergyPoints() const;
		void		set_EnergyPoints(int energyPoints);
		int			get_AttackDamage() const;
		void		set_AttackDamage(int attackDamage);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	protected:
		std::string _Name;
		int			_HitPoints;
		int 		_EnergyPoints;
		int 		_AttackDamage;
		
};

#endif