/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:46 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:36:05 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created" << std::endl;
	Brain* brain = new Brain();

	brain = this->brain;
	type = "Dog";
}

Dog::Dog(Dog const & ref)
{
	this->brain = ref.brain;
	this->type = ref.type;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	this->brain = rhs.brain;
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
	delete this->brain;
	std::cout << "Dog died :c" << std::endl;
}