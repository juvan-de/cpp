/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:58 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/20 14:36:34 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap first("Johan");

	first.guardGate();
	first.takeDamage(10);
	first.beRepaired(200);
	return (0);
}