/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 20:28:36 by juvan-de      #+#    #+#                 */
/*   Updated: 2022/02/02 12:54:23 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(1);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	MutantStack<int> a;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int, std::vector<int> > vectorstack;
	vectorstack.push(5);
	vectorstack.push(17);
	std::cout << vectorstack.top() << std::endl;
	vectorstack.pop();
	std::cout << vectorstack.size() << std::endl;
	vectorstack.push(3);
	vectorstack.push(5);
	vectorstack.push(737);
	vectorstack.push(1);
	vectorstack.push(0);
	MutantStack<int, std::vector<int> >::iterator vit = vectorstack.begin();
	MutantStack<int, std::vector<int> >::iterator vite = vectorstack.end();
	++it;
	--it;
	while (vit != vite)
	{
		std::cout << *vit << std::endl;
		++vit;
	}
	return 0;
}