/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 16:04:03 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/28 14:07:32 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}
