/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/18 13:56:46 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 14:55:32 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {

	public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &instance);
	void	attack() const;

	private:

	std::string _name;
	Weapon		*_weapon;
};

#endif