/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 19:28:25 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 13:45:19 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
	try 
	{
		Bureaucrat Jim("Jim", 100);
		PresidentialPardonForm president("me");
		RobotomyRequestForm robot("lel");
		ShrubberyCreationForm shrubb("home");

		Jim.signForm(president);
		Jim.signForm(robot);
		Jim.signForm(shrubb);
		Jim.executeForm(president);
		Jim.executeForm(robot);
		Jim.executeForm(shrubb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}