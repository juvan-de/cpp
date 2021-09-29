/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:45:47 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/23 15:55:50 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie	{

	public:

	Zombie(std::string name);
	~Zombie();
	void	announce(void);

	private:

	std::string	_name;
	
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif