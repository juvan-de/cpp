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


Contact::Contact() {
	return;
}

Contact::~Contact(void) {
	return;
}

void	Contact::getInfo(void) const {
	printInfo(this->_firstName);
	printInfo(this->_lastName);
	printInfo(this->_nickname);
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

void	Contact::setInfo(void){
	std::cout << "We are now going to add a contact:" << std::endl;
	std::cout << "Enter a first name." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Enter a last name" << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Enter a nickname." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter a login." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_login);
	std::cout << "Enter a postal address." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_postalAddress);
	std::cout << "Enter a email address." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_emailAddress);
	std::cout << "Enter a phone number." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Enter a birthday." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_birthdayDate);
	std::cout << "Enter a favorite meal." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_favoriteMeal);
	std::cout << "Enter a underwear color." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_underwearColor);
	std::cout << "Enter a darkest secret." << std::endl; 
	std::cout << "Enter here: ";
	std::getline(std::cin, this->_darkestSecret);
}

void	Contact::printAll(void) const {
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAddress << std::endl;
	std::cout << this->_emailAddress << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_birthdayDate << std::endl;
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << this->_underwearColor << std::endl;
	std::cout << this->_darkestSecret << std::endl;
}