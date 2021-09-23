/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/03 15:32:18 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/03 16:36:34 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>


Contact::Contact() 
{
	return;
}

Contact::~Contact(void) 
{
	return;
}

void	Contact::getInfo(void) const {
	printInfo(this->_field[0]);
	printInfo(this->_field[1]);
	printInfo(this->_field[2]);
	std::cout << std::endl;
}

void	Contact::printInfo(std::string content) const {
	if ((content).length() > 10)
	{
		(content).at(9) = '.';
		(content).resize(10);
	}
	std::cout << std::setfill (' ') << std::setw(10) << content << "|";
}

void		Contact::setInfo(void){
	std::string str[5];

	str[0] = "Enter a first name.";
	str[1] = "Enter a last name";
	str[2] = "Enter a nickname";
	str[3] = "Enter a phone number";
	str[4] = "Enter a darkest secret";

	std::cout << "We are now going to add a contact:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << str[i] << std::endl;
		std::cout << "Enter here: ";
		std::getline(std::cin, this->_field[i]);
		if (std::cin.eof())
			return ;
	}
}

void	Contact::printAll(void) const 
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->_field[i] << std::endl;
	}
}
