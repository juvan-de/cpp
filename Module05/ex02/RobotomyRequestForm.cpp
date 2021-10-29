/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:12 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 19:27:58 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), _name("RobotomyRequestForm"), _sign_grade(145), _exec_grade(137), _signed(false)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : _name(ref._name), _exec_grade(ref._exec_grade), _signed(ref._signed)
{
	*this = ref;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string	getTarget(void) const
{
	return (this->_target);
}