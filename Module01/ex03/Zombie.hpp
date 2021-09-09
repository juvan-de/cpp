/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:45:47 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/11 16:15:27 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie	{

	public:

	Zombie(std::string name, std::string type);
	~Zombie();
	void	announce();

	private:

	std::string	_type;
	std::string	_name;
	
};

#endif