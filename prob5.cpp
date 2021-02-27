#include<iostream>

int gcd(int a, int b)
{
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (a % b == 0)
		return b;
	return gcd(b, a%b);
}
int prob5()
{
	int num = 1;
	for (int i = 2; i <= 20; i++)
	{
		if (gcd(num, i) == 1)
			num *= i;
		else
			num = (num / gcd(num, i)) * i;
	}
	std::cout << num << std::endl;
	return 0;
}