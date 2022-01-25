/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 20:28:58 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/11/24 21:09:44 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>
template <typename T>
	class	MutantStack : public std::stack<T>
	{
		public:
		
		MutantStack() {};
		MutantStack(const MutantStack& ref);
		MutantStack& operator=(const MutantStack& ref);
		~MutantStack() {};
		typedef typename std::deque<T>::iterator iterator;
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
