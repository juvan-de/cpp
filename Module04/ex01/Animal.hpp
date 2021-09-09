/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:07:38 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:32:03 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {

	protected:
	std::string type;

	public:
	Animal();
	virtual ~Animal();
	Animal	&operator=(Animal const & rhs);
	Animal(Animal const & ref);
	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif