/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 18:19:56 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/07 21:39:40 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*Jim = new Pony("Jim", "12", "Carrots");
	Jim->getInfo();
	delete Jim;
	return ;
}

void	ponyOnTheStack(void)
{
	Pony Hank = Pony("Hank", "10", "Apples");
	Hank.getInfo();
	return ;
}

int		main(void)
{
	std::cout << "We enter the simulation." << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "We now exit the simulation." << std::endl;
	return (0);
}