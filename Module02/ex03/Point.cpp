/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 15:12:23 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/14 15:42:11 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <string>
#include <iostream>

Point::Point()
{
	
}

Point::Point(const Point& ref) : _x(ref._x), _y(ref._y)
{
	
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	
}

Point&	Point::operator=(const Point& ref)
{
	return (*this);
}

Fixed	const &Point::getX() const
{
	return(this->_x);
}

Fixed	const &Point::getY() const
{
	return(this->_y);
}

Point::~Point()
{

}
