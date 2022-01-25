/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 16:28:37 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/23 16:55:31 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template < typename T, typename sizetype>
	void	iter(T* elem, sizetype len, void (*f)(T&))
	{
		for (size_t i = 0; i < len; i++)
		{
			f(elem[i]);	
		}
	}

template < typename T >
	void increase(T &a)
	{
		a++;
	}

#endif
