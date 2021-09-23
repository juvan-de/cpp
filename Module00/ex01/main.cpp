/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/03 16:10:17 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/21 14:39:26 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

int		main(void)
{
	std::string	command;
	Contact		instance[9];
	int			instnbr = 1;
	int			i = 0;
	int			exit = 0;

	std::cout << "Hi!, welcome to this AWESOME Phonebook. Please type ADD to add a contact or type SEARCH to look for one." << std::endl;
	std::cout << "if you want to quit, type EXIT" << std::endl;
	while (exit == 0)
	{
		std::cout << "What would you like to do? ";
		std::getline(std::cin , command);
		if (std::cin.eof())
			return (0);
		if (command.compare("ADD") == 0)
		{
			if (instnbr < 9)
			{
				instance[instnbr].setInfo();
				instnbr++;
			}
			else
			{
				instance[1] = instance[2];
				instance[2] = instance[3];
				instance[3] = instance[4];
				instance[4] = instance[5];
				instance[5] = instance[6];
				instance[6] = instance[7];
				instance[7] = instance[8];
				instance[8].setInfo();
			}
		}
		else if(command.compare("SEARCH") == 0)
		{
			std::cout << "These are your contacts currently saved:" << std::endl;
			for(i = 1; i < instnbr; i++)
			{
				std::cout << i << "|";
				instance[i].getInfo();
			}
			std::cout << std::endl << "which index would you like to see?" << std::endl;
			std::cout << "Enter here: ";
			std::getline(std::cin, command);
			if (std::cin.eof())
				return (0);
			i = std::atoi(command.c_str());
			if (i < instnbr && i > 0)
				instance[i].printAll();
			else
				std::cout << "That's not a valid entry" << std::endl;
		}
		else if(command.compare("EXIT") == 0)
		{
			std::cout << "Okey byebye" << std::endl;
			exit = 1;
		}
		else
			std::cout << "that's not a valid command" << std::endl;
	}
	return (0);
}