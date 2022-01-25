/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 13:38:07 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/24 17:05:58 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int		main(void)
{
	int myints[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> container(myints, myints + sizeof(myints) / sizeof(int));
	std::deque<int> deque(myints, myints + sizeof(myints) / sizeof(int));
	int a = 6;
	try
	{
		int res = easyfind(container, a);
		int res2 = easyfind(deque, 0);
		std::cout << res << res2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}