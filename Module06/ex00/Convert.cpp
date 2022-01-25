/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 16:16:49 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/16 18:01:05 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


Convert::Convert(char *input) : _num(atoi(input)), _numf(atof(input)), _input(input)
{

}

Convert::Convert(const Convert& ref)
{
	*this = ref;
}

Convert&	Convert::operator=(const Convert& ref)
{
	this->_num = ref._num;
	this->_numf = ref._numf;
	return(*this);
}

Convert::~Convert()
{
	
}

bool	Convert::is_char(std::string input)
{
	if (input.size() == 1 && static_cast<int>(input[0]) >= 33 && static_cast<int>(input[0]) <= 126)
		return (true);
	return (false);
}

bool	Convert::is_literal(std::string input)
{
	if (input == "nan" || input == "nanf" || input == "+inff" || input == "-inff" || input == "-inf" || input == "+inf")
		return (true);
	return (false);
}


std::string	Convert::print_char()
{
	std::string res = "' '";

	if (is_char(this->_input))
		res[1] = this->_input[0];
	else if (std::isprint(this->_num))
	{
		res[1] = static_cast<char>(this->_num);
	}
	else if (is_literal(this->_input))
	{
		res = "impossible";
	}
	else
	{
		res = "Non displayable";
	}
	return(res);
}

std::string Convert::print_int()
{
	std::string res;
	if (is_literal(this->_input))
		res = "impossible";
	else
		res = std::to_string(this->_num);
	return (res);
}

std::string	Convert::print_double()
{
	std::string res;
	res = std::to_string(this->_numf);
	size_t pos = res.size() - 1;
	while (pos > 0 && res[pos] == '0' && res[pos - 1] != '.')
	{
		res.pop_back();
		pos--;
	}
	return (res);
}

std::string	Convert::print_float()
{
	float	num = static_cast<float>(this->_numf);
	std::string res;
	res = std::to_string(num);
	size_t pos = res.size() - 1;
	while (pos > 0 && res[pos] == '0' && res[pos - 1] != '.')
	{
		res.pop_back();
		pos--;
	}
	res.push_back('f');
	return (res);
}

void	Convert::print_values()
{
	std::cout << "char: " << this->print_char() << std::endl;
	std::cout << "int: " << this->print_int() << std::endl;
	std::cout << "float: " << this->print_float() << std::endl;
	std::cout << "double: " << this->print_double() << std::endl;
}
