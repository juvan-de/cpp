/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:53:26 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/29 14:22:26 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	Jim("Jim", 10);
	Form		climateBill("Climate bill", 20, 30);
	try
	{
//		std::cout << Jim << std::endl << climateBill << std::endl;
		climateBill.beSigned(Jim);
//		std::cout << Jim << std::endl << climateBill << std::endl;
		climateBill.beSigned(Jim);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}