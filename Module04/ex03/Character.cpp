/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:47:57 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/20 13:08:27 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "character is created" << std::endl;
}

Character::~Character()
{
	std::cout << "character is deleted" << std::endl;
}

Character::Character(std::string const name)
{
	this->name = name;
	std::cout << "The character " << this->name << " spawned" << std::endl;
}

Character::Character(Character const & ref)
{
	this->name = ref.name;
}

Character &Character::operator=(Character & rhs)
{
	*this = rhs;
	return (*this);
}

std::string const & Character::getName() const
{
	return(this->name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;
	while (this->materias[i])
	{
		i++;
	}
	if (i > 3)
	{
		std::cout << "this character has a full inventory" << std::endl;
	}
	else
	{
		this->materias[i] = m;
	}
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx > 3)
	{
		std::cout << "this slot doesn't exist" << std::endl;
		return ;
	}
	if (this->materias[idx])
	{
		materias[idx]->use(target);
	}
	else
		std::cout << "This slot isn't equipped" << std::endl;
}

void	Character::unequip(int idx)
{
	this->materias[idx] = 0;
}
