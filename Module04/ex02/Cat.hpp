/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:31:40 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:47:40 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal
{
	private:
	Brain *brain;
	
	public:

	Cat();
	Cat(Cat const & ref);
	virtual ~Cat();
	std::string	getType() const;
	Cat	&operator=(Cat const & ref);
	virtual void	makeSound() const;
};

#endif