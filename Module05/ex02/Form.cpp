/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 11:40:42 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 19:24:15 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (this->_sign_grade < 1 || this->_exec_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (this->_sign_grade > 150 || this->_exec_grade > 150)
	{
		throw GradeTooLowException();
	}
}

Form::Form(const Form& ref) : _name(ref._name), _sign_grade(ref._sign_grade), _exec_grade(ref._exec_grade)
{
	*this = ref;
}

Form&	Form::operator=(const Form& ref)
{
	this->_signed = ref._signed;
	return (*this);
}

Form::~Form()
{

}

void		Form::beSigned(Bureaucrat & ref)
{
	if (!(this->_signed))
	{
		std::cout << "this form is bouttta be signed yo" << std::endl;
		if (ref.getGrade() <= this->_sign_grade)
		{
			this->_signed = true;
			ref.signForm(*this);
		}
		else
		{
			ref.signForm(*this);
			throw GradeTooLowException();
		}
	}
	else
	{
		throw alreadySigned();
	}
}

std::string	Form::getName() const
{
	return (this->_name);
}

int		Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int		Form::getExecGrade() const
{
	return (this->_exec_grade);
}

bool		Form::isSigned() const
{
	return (this->_signed);
}

void	Form::execute(Bureaucrat const & executor) const 
{
	if (executor.getGrade() <= this->_exec_grade)
	{
		if (this->_signed)
		{
			executor.executeForm(*this);
		}
		else
			throw notSigned();
	}
	else
		throw GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	if (rhs.isSigned())
	{
		o << "The form " << rhs.getName() << " is signed" << std::endl;
		o << "It's sign grade is " << rhs.getSignGrade() << " and its execute grade is " << rhs.getExecGrade() << std::endl;
	}
	else
	{
		o << "The form " << rhs.getName() << " is not signed" << std::endl;
		o << "It's sign grade is " << rhs.getSignGrade() << " and its execute grade is " << rhs.getExecGrade() << std::endl;		
	}
	return (o);
}