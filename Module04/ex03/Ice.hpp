/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:32:51 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 16:55:31 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(Ice const & ref);
	Ice &operator=(Ice const & ref);
	~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif