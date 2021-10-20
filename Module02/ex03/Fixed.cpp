/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:17:19 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/14 15:42:42 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	this->_fixed_point = 0;
}

Fixed::Fixed(const int num) {
	this->_fixed_point = num << this->_frac_bits;
}

Fixed::Fixed(const float num) {
	float	temp;
	temp = num;
	temp *= 256;
	temp = roundf(temp);
	this->_fixed_point = (int)temp;
}

Fixed::Fixed(Fixed const & instance) {
	*this = instance;
}

Fixed::~Fixed() {
}

Fixed	&Fixed::operator=(Fixed const & rhs) {
	this->_fixed_point = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs) const 
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	float value;
	value = this->toFloat() + rhs.toFloat();
	Fixed temp(value);
	return (temp);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	float value;
	value = this->toFloat() - rhs.toFloat();
	Fixed temp(value);
	return (temp);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	float value;
	value = this->toFloat() * rhs.toFloat();
	Fixed temp(value);
	return (temp);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	float value;
	value = this->toFloat() / rhs.toFloat();
	Fixed temp(value);
	return (temp);
}

Fixed	&Fixed::operator++()
{
	this->_fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(this->toFloat());
	this->_fixed_point++;
	return (temp.toFloat());
}

Fixed	&Fixed::operator--()
{
	this->_fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(this->toFloat());
	this->_fixed_point--;
	return (temp.toFloat());
}

Fixed const &Fixed::max(Fixed const & left, Fixed const & right)
{
	if (left > right)
		return(left);
	return(right);
}

Fixed const &Fixed::min(Fixed const & left, Fixed const & right)
{
	if (left < right)
		return(left);
	return(right);
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
	return ((float)this->_fixed_point / (1 << this->_frac_bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}
