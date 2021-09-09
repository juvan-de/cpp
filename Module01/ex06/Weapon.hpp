/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:09:23 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 14:49:12 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

	public:
	
	Weapon(std::string name);
	~Weapon();
	std::string	getType() const;
	void		setType(std::string type);
	
	private:

	std::string	_type;
};

#endif