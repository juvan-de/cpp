/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:56 by julesvander   #+#    #+#                 */
/*   Updated: 2021/06/14 15:04:51 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap {

	private:
	FragTrap();
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
	FragTrap(std::string name);
	FragTrap(FragTrap const & ref);
	~FragTrap();
	FragTrap	&operator=(FragTrap const & rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif