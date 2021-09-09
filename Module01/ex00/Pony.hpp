/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/07 18:20:29 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/07 21:46:55 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
#include <iostream>

class Pony	{

	public:

	Pony(std::string name, std::string age, std::string food);
	~Pony(void);
	void	getInfo(void) const;
	std::string	getName(void) const;
	
	private:

	std::string	_name;
	std::string	_age;
	std::string	_favoriteFood;
};

#endif