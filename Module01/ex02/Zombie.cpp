/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:52:39 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/11 16:16:13 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	return ;
}

Zombie::~Zombie() {
	return ;
}

void	Zombie::announce() {
	std::cout << this->_name << "(" << this->_type << ") Braiiiiiiinnnssss..." << std::endl;
}