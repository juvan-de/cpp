/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:52:39 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/23 16:01:31 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) 
{
	std::cout << "Zombie " << name << " is created" << std::endl;
	return ;
}

Zombie::~Zombie() 
{
	std::cout << "Zombie " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	Zombie::announce() {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
