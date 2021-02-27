#include<iostream>




int prob12()
{
	int v = 1;
	for (long long int i = 1; ; i += v)
	{

		
		int count = 0;
		for (long long int j = 1; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				count+=2;
			}
		}
		if (count > 500)
		{
			std::cout << i << std::endl;
			break;
		}
		v++;
	}
	// ans: 837799
	return 0;
}