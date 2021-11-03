/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 13:49:03 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 14:26:49 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern& ref)
{
	*this = ref;
}

Intern&	Intern::operator=(const Intern& ref)
{
	return (*this);
}

Intern::~Intern()
{
	
}


Form 	*Intern::makeForm(std::string name, std::string target) const
{
	Form *forms[] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target), 
		new ShrubberyCreationForm(target)
	};
	Form *ret;
	std::string choices[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < 3; i++)
	{
		if (choices[i] == name)
		{
			std::cout << "Intern creates " << choices[i] << std::endl;
			ret = forms[i];
		}
		else
			delete forms[i];
	}
	return (ret);
}