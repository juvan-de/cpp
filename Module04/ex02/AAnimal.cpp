/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:11:01 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/16 16:55:37 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal(AAnimal const & ref)
{
	*this = ref;
	std::cout << "AAnimal copied" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed" << std::endl;
}
