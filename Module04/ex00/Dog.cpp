/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:46 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/22 14:37:42 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & ref)
{
	this->_type = ref._type;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	std::cout << "Dog copied" << std::endl;
	return (*this);
}

std::string	Dog::getType() const
{
	return(this->_type);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog died :c" << std::endl;
}