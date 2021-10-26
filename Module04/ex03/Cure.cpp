/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/13 17:35:08 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/26 16:56:24 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	AMateria::type = "cure";
	std::cout << "Cure materia made" << std::endl;
}

Cure::Cure(Cure const & ref)
{
	*this = ref;
	std::cout << "Cure copied" << std::endl;
}

Cure	&Cure::operator=(Cure const & rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *instance = new Cure();
	return(instance);
}

Cure::~Cure()
{
	std::cout << "Cure materia destroyed" << std::endl;
}
