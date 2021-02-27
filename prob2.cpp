#include <iostream>

long int fib(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int prob2()
{
	long long int sum=0;
	for (int i = 2; fib(i) < 4000000; i += 3)
		sum += fib(i);
	std::cout << sum << std:: endl;
	return 0;
}