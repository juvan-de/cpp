/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 14:47:14 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/20 16:23:02 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap was created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 3;
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
{
	this->_name = ref._name;
	this->_hitpoints = ref._hitpoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "FragTrap " << ref._name << "was copied to a new shell" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	this->_name = ref._name;
	this->_hitpoints = ref._hitpoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five guys!" << std::endl;
}