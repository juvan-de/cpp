/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 12:00:34 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 14:24:35 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "There is a brain now" << std::endl;
}

Brain::Brain(Brain const & ref)
{
	*this = ref;
}

Brain	&Brain::operator=(Brain const & rhs)
{
	std::cout << "brain copied" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
