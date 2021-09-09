/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/18 15:02:17 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/21 15:17:00 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		replace(std::string content, std::string original, std::string replace)
{
	if (content.find(original) < content.length())
	{
		content.replace(content.find(original), original.length(), replace);
	}
	return (content);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{	
		std::ifstream	ifs;
		std::string		buffer;
		std::string		file = argv[1];
		std::string		replaced;
		std::ofstream	out;

		ifs.open(file);
		out.open(file.append(".replace"));
		while (getline(ifs, buffer))
		{
			replaced = replace(buffer, (std::string)argv[2], (std::string)argv[3]);
			out << replaced << std::endl;
		}
	}
	else
	{
		std::cout << "please give 3 arguments: " << std::endl;
		std::cout << "first argument is a filename" << std::endl << "second argument is the sentence you'd like replaced" << std::endl << "third argument is the sentence you'd like it replaced with" << std::endl;
	}
	return (0);
}