/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:36:51 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 16:56:14 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	AMateria::type = "ice";
	std::cout << "ice materia made" << std::endl;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << std::endl;
}

Ice::Ice(Ice const & ref)
{
	*this = ref;
	std::cout << "Ice copied" << std::endl;
}

Ice	&Ice::operator=(Ice const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *instance = new Ice();
	return(instance);
}

Ice::~Ice()
{
	std::cout << "ice materia destroyed" << std::endl;
}
