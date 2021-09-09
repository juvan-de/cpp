/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 11:52:22 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/31 10:20:28 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	std::cout << "*Poof* a plume of smoke appeared, you hear a voice coming from the smoke: \"NinjaTrap " << this->_name << " at your service\"" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "My time has come.. I shall leave for the shadow realm." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & ref)
{
	std::cout << "Nothing happens, ninja " << ref._name << " can't see Ninja" << this->_name << "." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & ref)
{
	std::cout << "ninja attacks ScavTrap" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & ref)
{
	std::cout << "Ninja attacks FragTrap" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & ref)
{
	std::cout << "Ninja attacks the ClapTrap" << std::endl;
}