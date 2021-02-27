#include<iostream>
#include<math.h>

int prob9()
{
	for (int i = 0; i < 1000 ; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			if (i+j+(int)(sqrt(i*i+j*j))==1000&&(int)sqrt(i*i+j*j)==sqrt(i*i+j*j))
			{
				std::cout << i<<"*"<<j<<"*"<<sqrt(i*i+j*j)<<"="<<(double)(i * j * sqrt(i * i + j * j))<< std:: endl;
			}
		}
	}

	return 0;
}