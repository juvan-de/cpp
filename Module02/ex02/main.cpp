/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 13:12:24 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/14 14:37:55 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a(10);
	Fixed b(11);
	Fixed c(a);

	if (a < b)
		std::cout << "print this" << std::endl;
	if (a > b)
		std::cout << "don't print this" << std::endl;
	if (a <= b)
		std::cout << "print this" << std::endl;
	if (a >= b)
		std::cout << "don't print this" << std::endl;
	if (a == b)
		std::cout << "don't print this" << std::endl;
	if (a != b)
		std::cout << "print this" << std::endl;
	if (b < a)
		std::cout << "don't print this" << std::endl;
	if (b > a)
		std::cout << "print this" << std::endl;
	if (b <= a)
		std::cout << "don't print this" << std::endl;
	if (b >= a)
		std::cout << "print this" << std::endl;
	if (a == c)
		std::cout << "print this" << std::endl;
	if (c != a)
		std::cout << "don't print this" << std::endl;
	return 0;
}

// int	main(void)
// {
// 	Fixed a(5);
// 	Fixed b(3.1f);
// 	Fixed c;

// 	c = a + b;
// 	std::cout << c << std::endl;
// 	c = a - b;
// 	std::cout << c << std::endl;
// 	c = a * b;
// 	std::cout << c << std::endl;
// 	c = a / b;
// 	std::cout << c << std::endl;
// 	return (0);
// }

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;
// 	return 0;
// }