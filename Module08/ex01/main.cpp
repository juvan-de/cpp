/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 17:29:34 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/24 20:26:10 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdlib.h>


int main()
{
	srand(time(NULL));
	Span sp = Span(10001);
	// for (int i = 0; i < 10001; i++)
	// {
	// 	sp.addNumber(rand() % 10000 + i);
	// }

	sp.addNumber(-50000000);
	sp.addNumber(INT_MAX);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}