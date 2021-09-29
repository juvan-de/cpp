/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:10:03 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/28 14:35:24 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

Weapon::~Weapon()
{

}

std::string const &Weapon::getType() const {
	std::string const &strREF = this->_type;
	return (strREF);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}