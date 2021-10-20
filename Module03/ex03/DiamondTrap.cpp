#include "DiamondTrap.hpp"

#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	this->_name = ref._name;
	this->_hitpoints = ref._hitpoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "DiamondTrap " << ref._name << "was copied to a new shell" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	this->_name = ref._name;
	this->_hitpoints = ref._hitpoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap was destroyed" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name << " and my clapTrap name is " << ClapTrap::_name << std::endl;
}