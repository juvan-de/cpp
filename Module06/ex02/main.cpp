/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/17 13:33:38 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/17 14:01:23 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"
#include <iostream>
#include <string>

Base	*generate(void)
{
	Base *ptr;
	srand(time(NULL));
	int num = rand() % 3;
	std::cout << num << std::endl;
	if (num == 0)
		ptr = new A();
	else if(num == 1)
		ptr = new B();
	else
		ptr = new C();
	return (ptr);
}

void	identify(Base* p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
	
}

void	identify(Base &p)
{
	bool is_a = true;
	bool is_b = true;
	try {
		A 	&a = dynamic_cast<A&>(p);
	}
	catch(std::bad_cast &bc) {
		is_a = false;
	}
	try {
		B 	&b = dynamic_cast<B&>(p);
	}
	catch(std::bad_cast &bc) {
		is_b = false;
	}
	if (is_a)
		std::cout << "A" << std::endl;
	else if (is_b)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base *ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
}