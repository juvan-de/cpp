/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 09:29:04 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/20 14:33:09 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <array>

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " is poof'd into existence" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ref)
{
	this->_name = ref._name;
	this->_hitpoints = ref._hitpoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "the SCAV-TP " << ref._name << " has been copied to a new shell." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " has died" << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "SC4V-TRP " << this->_name << " flops at " << target << " at melee range, causing " << this->_attackDamage << " points of damage " << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap started guarding the gate" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	return (*this);
}