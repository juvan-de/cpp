/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 15:51:29 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/23 15:56:18 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie randomChump = Zombie(name);
    randomChump.announce();
}