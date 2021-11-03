/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 19:28:25 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/03 12:36:43 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat Abel("Abel", 1);
	Intern	Jim;
	Form	*newForm;
	newForm = Jim.makeForm("presidential pardon", "Beetle");
	Abel.signForm(*newForm);
	Abel.executeForm(*newForm);
	delete newForm;
	return (0);
}
