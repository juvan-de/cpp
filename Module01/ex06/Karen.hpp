/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 14:14:11 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/29 17:13:42 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <functional>

class	Karen
{
	public:
	Karen();

	~Karen();
	void	complain(std::string level);

	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
