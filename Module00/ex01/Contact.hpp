/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/03 15:32:21 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/28 11:43:03 by juvan-de      ########   odam.nl         */
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
	std::string	_field[5];
};

#endif