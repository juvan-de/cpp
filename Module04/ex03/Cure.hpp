/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/13 17:35:10 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/13 17:35:36 by juvan-de      ########   odam.nl         */
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
	~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif