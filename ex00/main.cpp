#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		int a = 4;
		int b = 6;

		std::cout << "Swap Test" << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		::swap(a, b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
	{
		std::string a = "test1";
		std::string b = "test2";

		std::cout << "Min Test" << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		std::cout << "min: " << ::min(a, b) << std::endl;
	}
	{
		float a = 5.631;
		float b = 56.94;
		
		std::cout << "Max Test" << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		std::cout << "max: " << ::max(a, b) << std::endl;
	}
}
