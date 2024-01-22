#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
	
	private:
		T *_arr;
		const unsigned int _size;

	public:
		Array(): _size(0)
		{
			this->_arr = new T[0];
		}
		
		Array(unsigned int n): _size(n)
		{
			this->_arr = new T[n];
		}
		
		Array(const Array &copy): _size(copy._size)
		{
			this->_arr = new T[copy._size];
			for (unsigned int i = 0; i < copy._size; i++)
			{
				this->_arr[i] = copy[i];
			}
		}
		
		~Array()
		{
			delete [] this->_arr;
		}

		Array &operator=(const Array &copy)
		{
			if (copy.size() >= this->_size)
				throw std::exception();
			for (unsigned int i = 0; i < copy._size; i++)
			{
				this->_arr[i] = copy[i];
			}
		}

		T &operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_arr[i];
		}

		unsigned int size() const
		{
			return this->_size;
		}

};

#endif
