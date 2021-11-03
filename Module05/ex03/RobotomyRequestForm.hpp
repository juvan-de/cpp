/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:15 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 13:11:06 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:
	RobotomyRequestForm();
	
	public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
	~RobotomyRequestForm();
	bool		execute(Bureaucrat const & executor) const;
};

#endif
