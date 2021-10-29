/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 11:43:08 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 13:59:56 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
	std::string const _name;
	int	_grade;
	Bureaucrat();
	public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& ref);
	Bureaucrat& operator=(const Bureaucrat& ref);
	int			getGrade() const;
	std::string	getName() const;
	void		increaseGrade();
	void		decreaseGrade();
	void		signForm(Form & ref) const;
	~Bureaucrat();
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
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
