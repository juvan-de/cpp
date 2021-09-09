/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:47:57 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/06 16:26:14 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	
}

Character::~Character()
{
	std::cout << "character is deleted" << std::endl;
}

Character::Character(std::string const name)
{
	this->name = name;
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