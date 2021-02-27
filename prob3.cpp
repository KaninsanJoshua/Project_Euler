#include <iostream>
#include <math.h>

bool checkprime(long long int n)
{
	for (long long int i = 3; i < sqrt(n); i += 2)
	{
		if (!(n % i))
		{
			return false;
		}
	}
	return true && ((n%2)&&(n!=2));
}



int prob3()
{
	long long int num = 600851475143,biggest=0;
	for(long long int i=3;i<num/2;i+=2)
	{
		if (i % 10000000000 == 0)
			std::cout << "ping" << std:: endl;
		if (!(num % i))
		{
			if (checkprime(num/i))
			{
				std::cout << num/i << std::endl;
				return 0;
			}
			else if (i > biggest&&checkprime(i))
			{
				biggest = i;
			}
		}
	}
	

	return 0;
}