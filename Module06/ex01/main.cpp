/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 18:12:43 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/17 13:21:28 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*res = reinterpret_cast<Data*>(raw);
	return (res);
}

int		main(void)
{
	Data *ptr = new Data();
	ptr->_data = 10;
	uintptr_t uptr = serialize(ptr);
	Data *ptr2 = deserialize(uptr);
	std::cout << ptr2->_data << std::endl;
}
