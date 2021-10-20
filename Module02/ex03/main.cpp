/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 13:12:24 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/14 16:19:08 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point v1((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
	Point v2((c.getX() - b.getX()).toFloat(), (c.getY() - b.getY()).toFloat());
	Point v3((a.getX() - c.getX()).toFloat(), (a.getY() - c.getY()).toFloat());
	Fixed da, db, dc;

	da = (point.getX() - a.getX()) * v1.getY();
	db = (point.getX() - b.getX()) * v2.getY();
	dc = (point.getX() - c.getX()) * v3.getY();
	if (da >= 0 && db >= 0 && dc >= 0)
		return (true);
	else if (da <= 0 && db <= 0 && dc <= 0)
		return (true);
	return (false);
}
 
int	main()
{
	Point a(0.0f, 8.0f);
	Point b;
	Point c(9.0f, 0.0f);
	Point inside(1.0f, 1.0f);
	Point outside(10.0f, 10.0f);
	if (bsp(a, b, c, inside))
		std::cout << "this point is inside" << std::endl;

	if (bsp(a, b, c, outside))
		std::cout << "this shouldn't be printed" << std::endl;
	return (0);
}