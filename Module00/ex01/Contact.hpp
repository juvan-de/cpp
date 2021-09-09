/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/03 15:32:21 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/04 17:21:01 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//first name, last name, nickname,
//login, postal address, email address, phone number, birthday date, favorite
//meal, underwear color and darkest secret.

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact {

	public:
	
	Contact(void);
	~Contact(void);

	void	setInfo(void);
	void	getInfo(void) const;
	void	printInfo(std::string content) const;
	void	printAll(void) const;

	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};

#endif