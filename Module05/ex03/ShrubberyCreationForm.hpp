/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 15:01:19 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 13:11:09 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
	ShrubberyCreationForm();
	
	public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& ref);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm();
	bool		execute(Bureaucrat const & executor) const;
};

#endif
