/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:07:38 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 14:32:03 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
# include <iostream>

class AAnimal {

	protected:
	std::string type;

	public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal	&operator=(AAnimal const & rhs);
	AAnimal(AAnimal const & ref);
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif