/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:58 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/31 10:22:09 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	ScavTrap first("Johan");
	ScavTrap fourth(first);
	NinjaTrap Ninja("Shiiii");

	Ninja.ninjaShoebox(first);
	srand(time(NULL));
	return (0);
}