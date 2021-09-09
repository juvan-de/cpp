/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:11:01 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/16 16:55:37 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const & ref)
{
	*this = ref;
	std::cout << "Animal copied" << std::endl;
}

Animal	&Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "*generic animal sound*" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}


Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}
