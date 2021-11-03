/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:17 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 13:42:52 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : Form(ref)
{
	*this = ref;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (Form::execute(executor))
	{
		std::ofstream newFile(this->_target + "_shrubbery");
		newFile << "ASCII trees" << std::endl;
		newFile.close();
		return (true);
	}
	return (false);
}