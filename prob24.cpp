#include<iostream>

int digits[10] = { 0 };
int prob24()
{
	unsigned long count =  725760;
	unsigned long long temp;
	int flag = 0;
	for (unsigned long long i = 2000000000;; i++)
	{
		temp = i;
		flag = 0;
		for (int j = 0; j < 10; j++)
		{
			digits[j] = 0;
		}
		while (temp)
		{
			digits[temp % 10] = 1;
			temp /= 10;
		}
		for (int j = 0; j < 10; j++)
		{
			
			flag += digits[j];
		}
		if (flag == 10)
		{
			std::cout << i << std::endl;
			count++;
		}
		if (count == 1000000)
		{
			std::cout << i << std:: endl;
			return 0;
		}
	}
	//ans 2783915460
	return 0;
}