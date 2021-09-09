/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 11:09:18 by julesvander   #+#    #+#                 */
/*   Updated: 2021/04/14 14:52:14 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
{
	this->_max_health = FragTrap::_max_health;
	this->_max_energy = NinjaTrap::_max_energy;
	this->_current_energy = NinjaTrap::_current_energy;
	this->_current_health = FragTrap::_current_health;
	this->_melee_dmg = NinjaTrap::_melee_dmg;
	this->_ranged_dmg = FragTrap::_ranged_dmg;
	this->_armor = FragTrap::_armor;
	this->_melee_dmg = NinjaTrap::_melee_dmg;
	this->_name = name;
	std::cout << "bliep bloep badaboep bam slam POW!" <<std::endl << this->_name << ", the supertrap just poofed into existence." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) 
{
	*this = src;
	std::cout << "you're as cold as ice ice baby" << std::endl;
}

SuperTrap	&	SuperTrap::operator=(SuperTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_current_energy = rhs._current_energy;
		this->_max_energy = rhs._max_energy;
		this->_current_health = rhs._current_health;
		this->_current_energy = rhs._current_energy;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_melee_dmg = rhs._melee_dmg;
		this->_ranged_dmg = rhs._ranged_dmg;
		this->_armor = rhs._armor;
	}
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "RIP the dream." << std::endl;
}
