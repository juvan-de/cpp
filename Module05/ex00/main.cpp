/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 12:54:29 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/27 17:42:25 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat one("Jennie", 1);
	try
	{
		one.increaseGrade();
		one.increaseGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//std::cout << one << std::endl;
	return (0);
}