/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:12 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 14:17:39 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : Form(ref)
{
	*this = ref;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	this->_target = ref._target;
	this->_signed = ref._signed;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (Form::execute(executor))
	{
		srand((unsigned) time(0));
		int result = 1 + (rand() % 2);
		if (result == 1)
			std::cout << "*DRILLING NOISES*" << std::endl << "robotomy was succesfull" << std::endl;
		else
			std::cout << "*DRILLING NOISES*" << std::endl << "robotomy was a failure" << std::endl;
		
		return (true);
	}
	return (false);
}
