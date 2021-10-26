/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:43 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 14:20:31 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Brain* brain = new Brain();
	std::cout << "Cat is born" << std::endl;

	this->brain = brain;
	this->type = "Cat";
}

Cat::Cat(Cat const & ref)
{
	std::cout << "Cat copied" << std::endl;
	Brain* brain = new Brain(*(ref.brain));
	this->brain = brain;
	this->type = ref.type;
}

Cat	&Cat::operator=(Cat const & rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = rhs.brain->ideas[i];
	}
	this->type = rhs.type;
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