/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julesvanderhoek <julesvanderhoek@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/18 17:22:54 by julesvander   #+#    #+#                 */
/*   Updated: 2021/10/26 16:49:38 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

// int main()
// {
// 	AMateria *instance = new Ice();
// 	AMateria *instance2 = new Cure();
// 	AMateria *instance3 = new Ice();
// 	AMateria *instance4 = new Cure();
// 	AMateria *last = new Cure();
// 	ICharacter *bob = new Character("bob");
// 	ICharacter *me = new Character("Jules");

// 	bob->equip(instance);
// 	bob->equip(instance2);
// 	bob->equip(instance3);
// 	bob->equip(instance4);
// 	bob->equip(last);
// 	bob->use(0, *me);
// 	bob->use(1, *me);
// 	bob->use(2, *me);
// 	bob->use(3, *me);
// 	bob->use(4, *me);
// 	return 0;
// }

int	main()
{
	IMateriaSource* src = new MateriaSource();
	Character* me = new Character("me");
	AMateria* tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	Character* bob = new Character(*me);
	bob->use(2, *me);
	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()                                               
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }