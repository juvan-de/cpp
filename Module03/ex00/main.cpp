/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 14:41:58 by julesvander   #+#    #+#                 */
/*   Updated: 2021/03/30 10:21:43 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap first("Billy");
	FragTrap second("Derek");
	srand(time(NULL));
	first.meleeAttack("Henk");
	first.rangedAttack("Honk");
	first.takeDamage(200);
	first.beRepaired(50);
	first.vaulthunter_dot_exe("Hunk");
	first.vaulthunter_dot_exe("Hink");
	first.vaulthunter_dot_exe("Hank");
	first.vaulthunter_dot_exe("Hounk");
	first.vaulthunter_dot_exe("Heunk");
	second = first;
	second.takeDamage(20);
	return (0);
}