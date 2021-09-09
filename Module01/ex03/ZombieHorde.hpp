/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/11 17:25:51 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/11 18:25:58 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde	{

	public:

	ZombieHorde(int	N);
	~ZombieHorde();

	private:
	
	int		_hordesize;
	Zombie	**_zombie;

};

#endif