/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 10:04:33 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 15:10:32 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int const max_health, int current_health, int const max_energy, int current_energy, int level, int const melee_dmg,
int const ranged_dmg, int armor, std::string name) : _max_health(max_health),
_current_health(current_health), _max_energy(max_energy),_current_energy(current_energy),
_level(level), _melee_dmg(melee_dmg), _ranged_dmg(ranged_dmg), _armor(armor), _name(name)
{	
	std::cout << "A new capsule is made" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
{
	*this = ref;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_current_health >= (amount - this->_armor))
		this->_current_health -= (amount - this->_armor);
	else
		this->_current_health = 0;
	std::cout << "Oof! " << this->_name << "took damage and is at " << this->_current_health << " HP." <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_current_health + amount <= this->_max_health)
		this->_current_health += amount;
	else
		this->_current_health = this->_max_health;
	std::cout << this->_name << " repaired itself and now has " << this->_current_health << " HP." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_level = rhs._level;
	this->_current_energy = rhs._current_energy;
	this->_current_health = rhs._current_health;
	this->_armor = rhs._armor;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "The new capsule is destroyed" << std::endl;
}