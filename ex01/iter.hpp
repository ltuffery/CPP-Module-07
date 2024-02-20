#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>

template<typename T, typename F>
void iter(T &arr, const int length, F func)
{
	for (int i = 0; i < length; i++)
	{
		func(arr[i]);
	}
}

#endif
