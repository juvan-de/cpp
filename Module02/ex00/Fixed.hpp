/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 14:43:37 by julesvander   #+#    #+#                 */
/*   Updated: 2021/02/24 15:30:41 by julesvander   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	private:
	
	int					_fixed_point;
	static const int	_frac_bits = 8;

	public:
	
	Fixed();
	Fixed(Fixed	const & copy);
	~Fixed();

	Fixed	&operator=(Fixed const & rhs);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	
};

#endif