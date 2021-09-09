/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:30:03 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/16 16:06:39 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {

}

const Brain &Human::getBrain() const {
	
	return (this->_Brain);
}

const Brain *Human::identify() const {

	return (this->_Brain.identify());
}

Human::~Human() {
	
}