/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:43 by julesvander   #+#    #+#                 */
/*   Updated: 2021/04/14 14:53:34 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <array>

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << "A FR4G-TP is created" << std::endl;
	this->_name = name;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->_name << " is dead" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	*this = copy;
}

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_dmg << " points of damage " << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee range, causing " << this->_melee_dmg << " points of damage " << std::endl;
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