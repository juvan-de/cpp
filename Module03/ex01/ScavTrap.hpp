/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/24 09:29:00 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 14:27:27 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap {

	private:
	ScavTrap();
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
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & rhs);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const & rhs);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);
};

#endif