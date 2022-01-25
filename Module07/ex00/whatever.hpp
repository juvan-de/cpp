/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/17 17:53:10 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/23 16:37:11 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

	template < typename T >
		T	max(T x, T y)
		{
			if (x > y)
				return (x);
			return (y);
		}
	template < typename T >
		T 	min(T x, T y)
		{
			if (x < y)
				return ( x);
			return ( y);
		}
	template < typename T >
		void	swap(T &x, T &y)
		{
			T temp = x;
			x =  y;
			y =  temp;
		}


#endif
