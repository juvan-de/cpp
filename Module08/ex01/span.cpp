/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 17:08:32 by juvan-de      #+#    #+#                 */
/*   Updated: 2022/01/25 13:08:01 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(unsigned int N) : _maxSize(N)
{
	_array.reserve(N);
}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span::~Span() {}

Span&	Span::operator=(const Span& ref)
{

	return (*this);
}	

void	Span::addNumber(int num)
{
	if (this->_array.size() > _maxSize - 1)
		throw arrayFullException();
	this->_array.push_back(num);
}

size_t	Span::difference(int a, int b)
{
	if (a > b)
		return (a - b);
	return (b - a);
}

size_t	Span::shortestSpan()
{
	size_t	span = (size_t)-1;
	int		temp;

	for (int i = 0; i < _array.size(); i++)
	{
		temp = _array[i];
		for (int j = 0; j < _array.size(); j++)
		{
			if (i != j && difference(temp, _array[j]) < span)
				span = difference(temp, _array[j]);
		}
	}
	return (span);
}

size_t	Span::longestSpan()
{
	size_t	span = 0;
	int		temp;

	for (int i = 0; i < _array.size(); i++)
	{
		temp = _array[i];
		for (int j = 0; j < _array.size(); j++)
		{
			if (difference(temp, _array[j]) > span)
				span = difference(temp, _array[j]);
		}
	}
	return (span);
}
