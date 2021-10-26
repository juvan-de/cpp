/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/13 17:35:10 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/26 16:50:55 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(Cure const & ref);
	Cure &operator=(Cure const & ref);
	~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif