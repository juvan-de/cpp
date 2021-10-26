/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:43 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/22 14:39:14 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & ref)
{
	this->_type = ref._type;
}

Cat	&Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	std::cout << "Cat copied" << std::endl;
	return (*this);
}

std::string	Cat::getType() const
{
	return(this->_type);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat died :c" << std::endl;
}