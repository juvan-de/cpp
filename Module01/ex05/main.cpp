/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:29:59 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/29 17:32:25 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen karen;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}