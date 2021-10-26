/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 16:50:01 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/22 14:38:08 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ref)
{
	*this = ref;
	std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*generic wrong animal sound*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}
