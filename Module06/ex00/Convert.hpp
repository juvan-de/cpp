/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 16:16:51 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/16 16:58:53 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class	Convert
{
	private:
		Convert();
		int			_num;
		double		_numf;
		std::string	_input;

	public:
		Convert(const Convert& ref);
		Convert(char *input);
		Convert& operator=(const Convert& ref);
		~Convert();
		bool	is_literal(std::string input);
		bool	is_char(std::string input);
		std::string	print_char();
		std::string	print_int();
		std::string	print_float();
		std::string	print_double();
		void		print_values();
};

#endif
