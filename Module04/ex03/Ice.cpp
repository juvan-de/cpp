/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:36:51 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/20 14:28:57 by juvan-de      ########   odam.nl         */
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

AMateria* Ice::clone() const
{
	AMateria *instance = new Ice();
	return(instance);
}

Ice::~Ice()
{
	std::cout << "ice materia destroyed" << std::endl;
}
