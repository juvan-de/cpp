/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:45:47 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/28 14:06:04 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie	{

	public:

	Zombie();
	Zombie(std::string name);
	void setName(std::string name);
	~Zombie();
	void	announce(void);

	private:

	std::string	_name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif