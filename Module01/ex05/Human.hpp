/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:30:01 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/16 16:01:05 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {

	public:

	Human();
	~Human();
	const Brain &getBrain() const;
	const Brain *identify() const;

	private:
	
	Brain const _Brain;

};

#endif