/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 14:43:37 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/25 13:45:08 by julesvander   ########   odam.nl         */
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
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	int				toInt(void) const;
	float			toFloat(void) const;
};
	std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif