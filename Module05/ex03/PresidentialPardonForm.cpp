/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 14:54:19 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 14:15:55 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form(ref)
{
	*this = ref;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (Form::execute(executor))
	{
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
		return (true);
	}
	return (false);
}