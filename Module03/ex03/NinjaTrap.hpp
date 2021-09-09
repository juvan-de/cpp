/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 11:29:59 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/30 15:38:30 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class NinjaTrap : public ClapTrap {

	private:

	NinjaTrap();

	public:

	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const & copy);
	void	ninjaShoebox(NinjaTrap const & ref);
	void	ninjaShoebox(FragTrap const & ref);
	void	ninjaShoebox(ScavTrap const & ref);
	void	ninjaShoebox(ClapTrap const & ref);
	
};

#endif