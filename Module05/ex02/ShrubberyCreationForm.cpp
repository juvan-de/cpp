/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:17 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 19:28:10 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), _name("ShrubberyCreationForm"), _sign_grade(145), _exec_grade(137), _signed(false)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : _name(ref._name), _exec_grade(ref._exec_grade), _signed(ref._signed)
{
	*this = ref;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string	getTarget(void) const
{
	return (this->_target);
}