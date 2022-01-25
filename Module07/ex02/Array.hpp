#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
	class	Array
	{
		private:
		T	*_array;
		size_t	_size;

		public:

		Array(unsigned int n = 0)
		{
			this->_size = n;
			T	*array = new T[n];
			this->_array = array;
		}
		Array(const Array& ref)
		{
			_array = NULL;
			*this = ref;
		}
		Array& operator=(const Array& ref)
		{
			delete []this->_array;
			this->_array = new T[ref._size];
			this->_size = ref._size;
			int i = 0;
			while (i < ref._size)
			{
				this->_array[i] = ref._array[i];
				i++;
			}
			return (*this);
		}
		~Array()
		{
			delete []_array;
		}
		T	&operator[](const int ref)
		{
			if (ref > this->_size || ref < 0)
			{
				throw std::exception();
			}
			return (this->_array[ref]);
		}
		size_t	size() const
		{
			return (this->_size);
		}
	};

#endif
