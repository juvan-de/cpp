/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:08:52 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/18 14:51:16 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("bob", club);
	HumanB jim("Jim");
	bob.attack();
	club.setType("dildo");
	bob.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	bob.attack();
}
