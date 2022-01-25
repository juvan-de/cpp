/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 17:08:30 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/24 20:19:41 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>

class	Span
{
	private:

	Span();
	size_t			difference(int a, int b);
	int				_maxSize;
	std::vector<int>	_array;

	public:

	Span(unsigned int N);
	Span(const Span& ref);
	Span& operator=(const Span& ref);
	void	addNumber(int num);
	size_t	longestSpan();
	size_t	shortestSpan();
	class arrayFullException : public std::exception
	{
		const char *what(void) const throw()
		{
			return ("Array is already full");
		}	
	};
	~Span();
};

#endif
