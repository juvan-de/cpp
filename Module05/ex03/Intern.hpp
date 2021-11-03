/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 13:49:10 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/02 14:02:25 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	Intern
{
	public:

	Intern();
	Form	*makeForm(std::string name, std::string target) const;
	Intern(const Intern& ref);
	Intern& operator=(const Intern& ref);
	~Intern();
};

#endif
