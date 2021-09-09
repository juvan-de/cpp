/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:43 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 15:04:22 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <array>

FragTrap::FragTrap(std::string name) :	_max_health(100), _current_health(100), _max_energy(100),
_current_energy(100), _level(1), _melee_dmg(30), _ranged_dmg(20), _armor(5)
{
	std::cout << "A FR4G-TP is created" << std::endl;
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const & ref) : _max_health(ref._max_health), _current_health(ref._current_health), _max_energy(ref._max_energy),
_current_energy(ref._current_energy), _level(ref._level), _melee_dmg(ref._melee_dmg), _ranged_dmg(ref._ranged_dmg), _armor(ref._armor)
{
	std::cout << "the FR4G-TP " << ref._name << " has been copied to a new shell." << std::endl;
	this->_name = ref._name;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->_name << " is dead" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage " << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee range, causing " << this->_melee_dmg << " points of damage " << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (this->_current_health >= (amount - this->_armor))
		this->_current_health -= (amount - this->_armor);
	else
		this->_current_health = 0;
	std::cout << "Oof! FR4G-TP took damage and is at " << this->_current_health << " HP." <<std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_current_health + amount <= this->_max_health)
		this->_current_health += amount;
	else
		this->_current_health = this->_max_health;
	std::cout << "FR4G-TP repaired himself and now has " << this->_current_health << " HP." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int	i;
	std::array<std::string, 5> attacks;

	attacks[0] = " flings poop ";
	attacks[1] = " fires his lazor ";
	attacks[2] = " looks seducingly ";
	attacks[3] = " coughs ";
	attacks[4] = " explodes ";

	if (this->_current_energy >= 25)
	{
		this->_current_energy -= 25;
		std::cout << "FR4G-TP " << this->_name << attacks[rand() % 5] << "at " << target << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_name << " is out of energy." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & rhs)
{
	this->_level = rhs._level;
	this->_current_energy = rhs._current_energy;
	this->_current_health = rhs._current_health;
	this->_armor = rhs._armor;
	return (*this);
}