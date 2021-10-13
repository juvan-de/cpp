/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:17:19 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/11 13:43:13 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = num << this->_frac_bits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	float	temp;
	temp = num;
	temp *= 256;
	temp = roundf(temp);
	this->_fixed_point = (int)temp;
}

Fixed::Fixed(Fixed const & instance) {
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
}

int		Fixed::toInt(void) const {
	return (this->_fixed_point >> this->_frac_bits);
}

float	Fixed::toFloat(void) const {
	float	res;
	int		i;
	res = (float)this->_fixed_point;
	res /= 256;
	return (res);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	float res = (float)rhs.getRawBits();
	res /= 256;
	o << res;
	return (o);
}