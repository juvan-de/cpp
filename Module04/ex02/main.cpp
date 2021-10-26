/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/16 15:28:24 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 14:44:00 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const AAnimal *a = new Dog();
// 	const AAnimal *b = new Cat();
// 	delete a;
// 	delete b;
// 	return (0);
// }

int main()
{
	Cat *catto = new Cat();
	Dog *doggo = new Dog();
	std::cout << std::endl;
	AAnimal *catto2 = new Cat(*catto);
	AAnimal *doggo2 = new Dog(*doggo);
	catto2->makeSound();
	std::cout << std::endl;
	const AAnimal *array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete array[i];
	}
	return (0);
}