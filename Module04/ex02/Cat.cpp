/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:43 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:35:59 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created" << std::endl;
	Brain* brain = new Brain();

	brain = this->brain;
	type = "Cat";
}

Cat::Cat(Cat const & ref)
{
	this->brain = ref.brain;
	this->type = ref.type;
}

Cat	&Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	this->brain = rhs.brain;
	std::cout << "Cat copied" << std::endl;
	return (*this);
}

std::string	Cat::getType() const
{
	return(this->type);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat died :c" << std::endl;
}