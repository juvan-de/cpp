/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 16:52:57 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/16 16:58:58 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(WrongCat const & ref);
	~WrongCat();
	std::string	getType() const;
	WrongCat	&operator=(WrongCat const & ref);
};

#endif