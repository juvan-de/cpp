/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 15:00:33 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 16:39:40 by juvan-de      ########   odam.nl         */
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
	AMateria &operator=(AMateria & rhs);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
