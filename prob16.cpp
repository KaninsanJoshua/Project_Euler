#include<iostream>
//#include"bigint.h"


int prob16()
{
	long long sum=0;
	//Dodecahedron::Bigint x = 1;
	for (int i = 0; i < 1000; i++)
	{
	//	x = x * 2;
	}
	std::string s = "123"; //to_string(x);

	for (long i = 0; i < s.length(); i++)
	{

		sum += (int)(s[i] - '0');
	}
	std::cout << sum << std::endl;
	return 0;
}