/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 16:51:59 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/16 16:52:35 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

	protected:
	std::string type;

	public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal	&operator=(WrongAnimal const & rhs);
	WrongAnimal(WrongAnimal const & ref);
	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif