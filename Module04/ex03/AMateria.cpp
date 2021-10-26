/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 15:00:25 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 16:43:40 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "materia build" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "materia destroyed" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "A materia of type " << this->type << " has been created" << std::endl;
}

AMateria &AMateria::operator=(AMateria & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "this shouldn't be printed like ever.." << std::endl;
	(void)target;
}
