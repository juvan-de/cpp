/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/18 12:54:49 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 14:27:47 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &instance) : _name(name), _weapon(instance) {

}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}
