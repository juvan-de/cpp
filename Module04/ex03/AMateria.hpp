/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 15:00:33 by julesvander   #+#    #+#                 */
/*   Updated: 2021/09/13 17:19:56 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:

	protected:
	AMateria();
	std::string type;

	public:
	AMateria(std::string const & type);
	~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
