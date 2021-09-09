/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:25:37 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/15 11:28:42 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *ptr = &string;
	std::string &ref = string;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}