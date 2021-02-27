#include<iostream>
#include"bigint.h"

int prob25()
{
	Dodecahedron::Bigint x1 = 1;
	Dodecahedron::Bigint x2 = 1;
	Dodecahedron::Bigint temp ;
	std::string str;
	for (int i = 3;; i++)
	{
		temp = x1 + x2;
		x1 = x2;
		x2 = temp;
		str = to_string(x2);
		if (str.length() == 1000)
		{
			std::cout << i << std:: endl;
			break;
		}
	}
	return 0;
}