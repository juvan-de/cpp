/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:46 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/16 16:38:49 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & ref)
{
	this->type = ref.type;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	std::cout << "Dog copied" << std::endl;
	return (*this);
}

std::string	Dog::getType() const
{
	return(this->type);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog died :c" << std::endl;
}