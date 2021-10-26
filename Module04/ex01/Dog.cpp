/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:46 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 14:18:50 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	Brain* brain = new Brain();
	std::cout << "Dog is born" << std::endl;

	this->brain = brain;
	type = "Dog";
}

Dog::Dog(Dog const & ref)
{
	std::cout << "Dog copied" << std::endl;
	Brain* brain = new Brain(*(ref.brain));
	this->brain = brain;
	this->type = ref.type;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = rhs.brain->ideas[i];
	}
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
	delete this->brain;
	std::cout << "Dog died :c" << std::endl;
}