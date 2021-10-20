/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 14:47:11 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/20 16:20:20 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:

	FragTrap();

	public:
	
	FragTrap(std::string name);
	FragTrap(const FragTrap& ref);
	FragTrap& operator=(const FragTrap& ref);
	virtual ~FragTrap();
	void	highFivesGuys(void);
};

#endif
