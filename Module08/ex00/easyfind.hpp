#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <exception>

class intNotFound : public std::exception
{
	const char *what(void) const throw()
	{
		return ("Int not in container");
	}	
};

template <typename T>
	int	easyfind(T container, int needle)
	{
		int i = 0;
		while (i < container.size())
		{
			if (container[i] == needle)
				return (container[i]);
			i++;	
		}
		throw intNotFound();
	}
#endif
