/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 09:29:04 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 14:45:38 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <array>

ScavTrap::ScavTrap(std::string name) :	_max_health(100), _current_health(100), _max_energy(50),
_current_energy(50), _level(1), _melee_dmg(20), _ranged_dmg(15), _armor(3)
{
	std::cout << "BLIEP-BLOOP ScavTrap " << name << " is poof'd into existence" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap() {
	std::cout << "KRRRRRRR B00M " << this->_name << " has died" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TRP " << this->_name << " looks at " << target << " menacingly causing " << this->_ranged_dmg << " points of damage " << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TRP " << this->_name << " flops at " << target << " at melee range, causing " << this->_melee_dmg << " points of damage " << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->_current_health >= (amount - this->_armor))
		this->_current_health -= (amount - this->_armor);
	else
		this->_current_health = 0;
	std::cout << "Oof! FR4G-TP took damage and is at " << this->_current_health << " HP." <<std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_current_health + amount <= this->_max_health)
		this->_current_health += amount;
	else
		this->_current_health = this->_max_health;
	std::cout << "FR4G-TP repaired himself and now has " << this->_current_health << " HP." << std::endl;
}

void	ScavTrap::challengeNewcomer(void) {
	std::array<std::string, 5> attacks;

	attacks[0] = " a duel of wits ";
	attacks[1] = " a paper airplane competition ";
	attacks[2] = " a dance-off ";
	attacks[3] = " a battle of rock, paper, scissors, lizard, spock ";
	attacks[4] = " a burping competition ";

	std::cout << "The ScavTrap challenges you to" << attacks[rand() % 5] << "before you may enter." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ref) : _max_health(ref._max_health), _current_health(ref._current_health), _max_energy(ref._max_energy),
_current_energy(ref._current_energy), _level(ref._level), _melee_dmg(ref._melee_dmg), _ranged_dmg(ref._ranged_dmg), _armor(ref._armor)
{
	std::cout << "the SCAV-TP " << ref._name << " has been copied to a new shell." << std::endl;
	this->_name = ref._name;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_current_energy = rhs._current_energy;
	this->_armor = rhs._armor;
	this->_current_health = rhs._current_health;
	this->_level = rhs._level;
	return (*this);
}