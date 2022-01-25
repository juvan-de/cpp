/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 13:59:54 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/16 15:12:53 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Convert.hpp"

bool	is_double(std::string input)
{
	int i = 0;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return (true);
	while (input[i])
	{
		if (input[i] == '.')
		{
			if (input[input.size() - 1] != 'f')
				return (true);
		}
		i++;
	}
	return (false);
}

bool	is_float(std::string input)
{
	int i = 0;
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (true);
	while (input[i])
	{
		if (input[i] == '.')
		{
			if (input[input.size() - 1] == 'f')
				return (true);
		}
		i++;
	}
	return (false);	
}

bool	is_int(std::string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		if ((static_cast<int>(input[i]) <= 48 || static_cast<int>(input[i]) >= 57))
			return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (0);
	}
	Convert input(argv[1]);
	input.print_values();
	return (0);
}