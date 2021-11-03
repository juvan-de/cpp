/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 11:40:30 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 14:27:10 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	protected:
	std::string	const	_name;
	bool				_signed;
	int const			_sign_grade;
	int const			_exec_grade;
	std::string			_target;
	Form();
	public:
	
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form& ref);
	Form& operator=(const Form& ref);
	void		beSigned(Bureaucrat const & ref);
	std::string	getName(void) const;
	std::string	getTarget(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	bool		isSigned(void) const;
	bool virtual	execute(Bureaucrat const & executor) const = 0;
	virtual ~Form();
	class GradeTooHighException : public std::exception
		{
			const char *what(void) const throw()
			{
				return ("Grade too high");
			}
		};
	class GradeTooLowException : public std::exception
		{
			const char *what(void) const throw()
			{
				return ("Grade too low");
			}
		};
	class alreadySigned : public std::exception
		{
			const char *what(void) const throw()
			{
				return ("This form is already signed");
			}
		};
	class notSigned : public std::exception
		{
			const char *what(void) const throw()
			{
				return ("This form is not yet signed");
			}
		};
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
