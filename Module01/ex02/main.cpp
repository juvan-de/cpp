/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 16:07:42 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/28 14:23:31 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *strPTR = &string;
	std::string &strREF = string;

	std::cout << "String address:" << std::endl;
	std::cout << &string << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;

	std::cout << "String:" << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;
	return (0);
}