#include "iter.hpp"
#include <iostream>
#include <string>

void toUpper(char &c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
}

int main()
{
	std::string a = "coucouLESLOuLOu";

	::iter(a, a.length(), toUpper);
	std::cout << a << std::endl;
}
