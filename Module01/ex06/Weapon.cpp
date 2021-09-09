/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:10:03 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 13:55:33 by julesvander   ########   odam.nl         */
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

std::string	Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}