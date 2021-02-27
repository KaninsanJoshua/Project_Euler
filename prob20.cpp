#include<iostream>
//#include"bigint.h"
#include<string>
int prob20()
{
	long long sum = 0;
	//Dodecahedron::Bigint x;
	//x = Dodecahedron::factorial(100);
	std::string str = "123"; //to_string(x);
	for (long i = 0; i < str.length(); i++)
	{

		sum += (int)(str[i] - '0');
	}
	std::cout << sum << std::endl;
	return 0;
}