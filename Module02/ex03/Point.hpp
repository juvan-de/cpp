/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 15:11:53 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/14 15:35:07 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class	Point
{
	private:

	Fixed const _x;
	Fixed const _y;
	public:
	
	Point();
	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
	Point(const Point& ref);
	Point(const float x, const float y);
	Point& operator=(const Point& ref);
	~Point();
};

#endif
