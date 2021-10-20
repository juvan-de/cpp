/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 21:41:00 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/11 14:48:01 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	horde = zombieHorde(5, "bob");
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}