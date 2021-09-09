/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 12:00:34 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 12:08:13 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "There is a brain now" << std::endl;
}

Brain::Brain(Brain const & ref)
{
	std::cout << "brain copied" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ref.ideas[i];
	}
}

Brain	&Brain::operator=(Brain const & rhs)
{
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
