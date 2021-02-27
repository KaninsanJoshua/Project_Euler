#include<iostream>

bool abundant[30000] = {0};

long int sum_of_factor(int n)
{
	long int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;

		}
	}
	return sum;
}

int prob23()
{
	unsigned long int sum = 0,flag;
	for (unsigned int i = 1; i < 28124; i++)
	{
		if ( sum_of_factor(i) > i)
		{
			abundant[i] = 1; 
		}
	}
	for (unsigned int i = 1; i < 28124; i++)
	{
		flag = 1;
		for (unsigned int j = 1; j <= i / 2; j++)
		{
			if (abundant[j] == 1 && abundant[i - j] == 1)
			{
				flag = 0;
			}
		}
		if (flag)
		{
			sum += i;
		}
	}
	std::cout << sum << std::endl;
	//Answer:4179871
	return 0;
}