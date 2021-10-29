/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 14:54:19 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 19:27:52 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), _name("PresidentialPardonForm"), _sign_grade(25), _exec_grade(5), _signed(false)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : _name(ref._name), _exec_grade(ref._exec_grade), _signed(ref._signed)
{
	*this = ref;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

std::string	getTarget(void) const
{
	return (this->_target);
}