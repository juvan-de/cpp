/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:08:52 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/29 17:45:08 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;
	if (argc == 2)
	{
		karen.complain(argv[1]);
	}
	else
		std::cout << "this program only takes 1 argument" << std::endl;
	return (0);
}
