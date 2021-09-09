/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 16:52:54 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 11:41:23 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat created" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & ref)
{
	this->type = ref.type;
}

WrongCat	&WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.type;
	std::cout << "WrongCat copied" << std::endl;
	return (*this);
}

std::string	WrongCat::getType() const
{
	return(this->type);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat died :c" << std::endl;
}
