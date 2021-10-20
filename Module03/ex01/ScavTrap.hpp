/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 09:29:00 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/20 16:20:30 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	private:
	ScavTrap();

	public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & rhs);
	virtual ~ScavTrap();
	ScavTrap	&operator=(ScavTrap const & rhs);
	void	attack(std::string const & target);
	void	guardGate();
};

#endif