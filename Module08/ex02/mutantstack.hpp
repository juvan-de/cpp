/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 20:28:58 by juvan-de      #+#    #+#                 */
/*   Updated: 2022/02/02 12:50:47 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>
template <typename T, typename container = std::deque<T> >
	class	MutantStack : public std::stack<T, container>
	{
		public:
		
		MutantStack() {};
		MutantStack(const MutantStack& ref);
		MutantStack& operator=(const MutantStack& ref);
		~MutantStack() {};
		typedef typename container::iterator iterator;
		iterator	begin()
		{
			return(this->c.begin());
		}
		iterator	end()
		{
			return(this->c.end());
		}
};

#endif
