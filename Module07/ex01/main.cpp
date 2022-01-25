/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 16:39:26 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/23 17:05:12 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int array[10] = {419, 2, 3, 4, 68, 5, 6, 7, 9, 0};
	char str[] = "banaan";
	float floaties[] = {3.4f, 1.5f, 10.9f};
	::iter(array, 10, ::increase);
	::iter(str, 6, ::increase);
	::iter(floaties, 3, ::increase);
	for (size_t i = 0; i < 10; i++)
		std::cout << array[i] << std::endl;
	for (size_t i = 0; i < 6; i++)
		std::cout << str[i] << std::endl;
	for (size_t i = 0; i < 3; i++)
		std::cout << floaties[i] << std::endl;
	return (0);
}