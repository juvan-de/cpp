/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 18:08:08 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/21 14:06:13 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale> 

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	std::string str;
	std::locale loc;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			j = 0;
			while (str[j])
			{
				std::cout << std::toupper(str[j], loc);
				j++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}