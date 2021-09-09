/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 18:23:31 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/07 19:54:14 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string age, std::string food) {
	std::cout << "A new pony is born." << std::endl;
	this->_name = name;
	this->_age = age;
	this->_favoriteFood = food;
	return ;
}

Pony::~Pony() {
	std::string	name;

	name = this->getName();
	std::cout << name << " has died :( ." << std::endl;
	return ;
}

std::string	Pony::getName() const {
	return (this->_name);
}

void	Pony::getInfo() const {
	std::cout << "The pony is called " << this->_name << std::endl;
	std::cout << "He is " << this->_age << " years old." << std::endl;
	std::cout << "His favorite food is " << this->_favoriteFood << std::endl;
}