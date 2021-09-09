/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 10:04:30 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 14:23:46 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	protected:
	ClapTrap();
	int	const _max_health;
	int	_current_health;
	int	const _max_energy;
	int	_current_energy;
	int	_level;
	int	const _melee_dmg;
	int	const _ranged_dmg;
	int	_armor;
	std::string _name;

	public:
	ClapTrap(int const max_health, int current_health, int const max_energy, int current_energy, int level, int const melee_dmg,
			int const ranged_dmg, int armor, std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const & copy);
	ClapTrap	&operator=(ClapTrap const & rhs);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif