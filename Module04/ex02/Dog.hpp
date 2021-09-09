/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:45 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:48:02 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal
{
	private:
	Brain *brain;
	
	public:

	Dog();
	Dog(Dog const & ref);
	virtual ~Dog();
	std::string	getType() const;
	Dog	&operator=(Dog const & ref);
	virtual void	makeSound() const;
};

#endif