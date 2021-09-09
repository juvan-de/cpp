/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 16:07:42 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/11 17:22:44 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int		main(void)
{
	ZombieEvent	newZombie;
	
	newZombie.setZombieType("deathlord");
	Zombie *zombieOne = newZombie.newZombie("Hank");
	newZombie.setZombieType("brainiac");
	newZombie.randomChump();
	newZombie.randomChump();
	newZombie.randomChump();
	delete zombieOne;
	
	return (0);
}