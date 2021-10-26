/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 16:52:54 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/22 14:39:06 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat created" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & ref)
{
	this->_type = ref._type;
}

WrongCat	&WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs._type;
	std::cout << "WrongCat copied" << std::endl;
	return (*this);
}

std::string	WrongCat::getType() const
{
	return(this->_type);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat died :c" << std::endl;
}
