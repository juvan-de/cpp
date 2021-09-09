/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 17:35:02 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/11 17:19:29 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <stdlib.h>
#include <array>

ZombieEvent::ZombieEvent() {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie *subject = new Zombie(name, this->_zombieType);
	subject->announce();
	return (subject);
}

void	ZombieEvent::randomChump(void) {
	std::array<std::string, 5> names;
	names[0] = "Henk";
	names[1] = "Tineke";
	names[2] = "Wouter";
	names[3] = "Thijs";
	names[4] = "Sandra";
	Zombie newZombie(names[rand() % 5], this->_zombieType);
	newZombie.announce();
}

ZombieEvent::~ZombieEvent() {
	return ;
}