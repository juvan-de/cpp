/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 14:14:10 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/29 17:55:22 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void (Karen::*func_t)();

struct list_entry {
	func_t func;
	std::string name;
};

Karen::Karen()
{

}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void    Karen::complain(std::string level)
{
    int num = std::atoi(level.c_str());
    list_entry list[4] = {
		{.func = &Karen::debug, "DEBUG"},
		{.func = &Karen::info, "INFO"},
		{.func = &Karen::warning, "WARNING"},
		{.func = &Karen::error, "ERROR"}
	};

	for (int i = 0; i < 4; i++) {
		if (level.compare(list[i].name)) {
			continue;
		}
		while (i < 4)
		{
			std::cout << "[ " << list[i].name << " ]" << std::endl;
			(this->*list[i].func)();
			i++;
		}
		return;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Karen::~Karen()
{

}
