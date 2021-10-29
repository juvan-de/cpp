/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 11:40:30 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 14:14:31 by juvan-de      ########   odam.nl         */
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
	private:
	std::string	const	_name;
	bool				_signed;
	int const			_sign_grade;
	int const			_exec_grade;
	Form();
	public:
	
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form& ref);
	Form& operator=(const Form& ref);
	void		beSigned(Bureaucrat & ref);
	std::string	getName(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	bool		isSigned(void) const;
	~Form();
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
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
