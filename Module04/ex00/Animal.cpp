/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:11:01 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/22 14:39:53 by juvan-de      ########   odam.nl         */
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
	this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "*generic animal sound*" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}


Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}
