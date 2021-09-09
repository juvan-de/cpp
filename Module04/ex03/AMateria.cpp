/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 15:00:25 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/06 16:12:37 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

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

std::string const & AMateria::getType() const
{
	return (this->type);
}
