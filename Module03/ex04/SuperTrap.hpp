/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/31 10:24:47 by julesvander   #+#    #+#                 */
/*   Updated: 2021/04/08 16:42:44 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	private:
	SuperTrap();


	public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap();
};


#endif