#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <exception>
# include <algorithm>

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
		typename T::iterator p;
		p = std::find(container.begin(), container.end(), needle);
		if (p == container.end())
			throw intNotFound();
		return (*p);
	}
#endif
