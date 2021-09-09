/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:40 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:23:03 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:

	Cat();
	Cat(Cat const & ref);
	virtual ~Cat();
	std::string	getType() const;
	Cat	&operator=(Cat const & ref);
	void	makeSound() const;
};

#endif