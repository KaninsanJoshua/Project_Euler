#include<iostream>

long int table[50000] = { 0 };
long int sum_factor(int n)
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
int prob21()
{
	long int factor_sum,total=0;

	for (long i = 1; i < 10000; i++)
	{
		factor_sum = sum_factor(i);
		table[i] = factor_sum;
	}
	for (long i = 1; i < 10000; i++)
	{
		if (table[(table[i])] == i && i!=table[i])
		{
			total += table[i];
		}
	}
	std::cout << total << std::endl;
	//ans:31626
	return 0;
}