/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 09:29:04 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/30 13:31:29 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <array>

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name)
{
	std::cout << "BLIEP-BLOOP ScavTrap " << name << " is poof'd into existence" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap() {
	std::cout << "KRRRRRRR B00M " << this->_name << " has died" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
	
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TRP " << this->_name << " looks at " << target << " menacingly causing " << this->_ranged_dmg << " points of damage " << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TRP " << this->_name << " flops at " << target << " at melee range, causing " << this->_melee_dmg << " points of damage " << std::endl;
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

