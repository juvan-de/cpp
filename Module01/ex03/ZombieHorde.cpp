/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 17:27:03 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/15 11:23:16 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//Zombie *subject = new Zombie(name, this->_zombieType);
#include "ZombieHorde.hpp"
#include <array>
#include <time.h>

ZombieHorde::ZombieHorde(int N) {
	int	i;
	std::array<std::string, 5> names;

	this->_hordesize = N;
	names[0] = "Henk";
	names[1] = "Tineke";
	names[2] = "Wouter";
	names[3] = "Thijs";
	names[4] = "Sandra";
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		this->_zombie[i] = new Zombie(names[rand() % 5], "horde");
		_zombie[i]->announce();
	}
}

ZombieHorde::~ZombieHorde() {
	int	i;
	for (i = 0; i < this->_hordesize; i++)
	{
		delete this->_zombie[i];
	}
	return ;
}