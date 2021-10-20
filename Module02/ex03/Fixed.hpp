/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 14:43:37 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/14 15:39:37 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	private:
	
	int					_fixed_point;
	static const int	_frac_bits = 8;

	public:
	
	Fixed();
	Fixed(int const num);
	Fixed(const float num);
	Fixed(Fixed	const & copy);
	~Fixed();

	Fixed			&operator=(Fixed const & rhs);
	bool			operator<(Fixed const & rhs) const;
	bool			operator>(Fixed const & rhs) const;
	bool			operator>=(Fixed const & rhs) const;
	bool			operator<=(Fixed const & rhs) const;
	bool			operator==(Fixed const & rhs) const;
	bool			operator!=(Fixed const & rhs) const;
	Fixed			operator+(Fixed const & rhs) const;
	Fixed			operator-(Fixed const & rhs) const;
	Fixed			operator*(Fixed const & rhs) const;
	Fixed			operator/(Fixed const & rhs) const;
	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
	Fixed			operator--(int);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	int				toInt(void) const;
	float			toFloat(void) const;

	static Fixed const &max(Fixed const & left, Fixed const & right);
	static Fixed const &min(Fixed const & left, Fixed const & right);
};
	std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif