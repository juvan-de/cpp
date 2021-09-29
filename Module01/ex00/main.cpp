/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 18:19:56 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/23 15:59:59 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *boy = newZombie("hank");
	randomChump("girl");
	delete boy;
	return (0);
}