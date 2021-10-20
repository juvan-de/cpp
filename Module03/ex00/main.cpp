/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:58 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/14 18:37:30 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap instance("Hank");
	ClapTrap twee("hi");

	instance = twee;
	instance.attack("yo mama");
	instance.takeDamage(8);
	instance.takeDamage(5);
	instance.beRepaired(20);
	return (0);
}