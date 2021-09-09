/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/18 12:49:31 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 14:27:26 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA {

	public:

	HumanA(std::string name, Weapon &instance);
	~HumanA();
	void	attack() const;

	private:

	std::string _name;
	Weapon &_weapon;
};

#endif