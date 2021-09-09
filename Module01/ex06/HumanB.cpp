/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/18 13:59:36 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 15:32:00 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &instance){
	this->_weapon = &instance;
}

void	HumanB::attack() const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB() {

}