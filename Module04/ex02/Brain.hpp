/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 12:00:36 by julesvander   #+#    #+#                 */
/*   Updated: 2021/08/18 12:09:58 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {

	public:
	std::string ideas[100];
	Brain();
	~Brain();
	Brain &operator=(Brain const & rhs);
	Brain(Brain const & ref);
};

#endif