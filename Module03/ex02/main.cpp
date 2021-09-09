/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:58 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/30 10:07:59 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap first("Johan");
	FragTrap second("Derek");
	srand(time(NULL));

	first.challengeNewcomer();
	first.meleeAttack("Link");
	first.rangedAttack("Lonk");
	first.takeDamage(5);
	first.beRepaired(20);
	return (0);
}