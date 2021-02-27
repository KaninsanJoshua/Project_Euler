#include <iostream>


bool palin(long long int n)
{
	long long int temp=0, num = n;
	while (n)
	{
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	return temp == num;
}

int prob4()
{
	long long biggest = 0;
	for (int i = 999; i >= 100; i--)
	{ 
		for (int j = i; j >= 100; j--)
		{
			if (palin(i * j))
			{
				
				if (i * j > biggest)
					biggest = i * j;
			}
			
		}
	}
	std::cout << biggest << std::endl;
	return 0;
}