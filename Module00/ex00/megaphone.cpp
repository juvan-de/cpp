/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 18:08:08 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/06 02:14:55 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	return (c - 32);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
					std::cout << ft_toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
				j++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}