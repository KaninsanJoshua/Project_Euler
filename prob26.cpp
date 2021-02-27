#include<iostream>

int floating_digits[10000] = {0};

int minimu(int m, int n)
{
	return (m < n ? m : n);
}

int countrecurring(int count)
{
	int count= 0, instance = 0;
	for (long int i = 0; i < count && floating_digits[i] != -8; i++)
	{
		for (long int j = 0; j < count && floating_digits[j] != -8 ; j++)
		{
			if (floating_digits[j] == floating_digits[i])
			{
				instance = j;
				break;
			}
		}
		for (long int j = 0; j < count && floating_digits[j] != -8 ; j++)
		{
			if (floating_digits[i + j] != floating_digits[instance + j])
			{
				count = j;
				break;
			}
			i += j;
			instance += j;
		}
	}
}
int main()
{

	double n ;
	int count;
	for (int i = 3; i < 4; i++)
	{
		n = (double) 1 / (double)i;
		count = 0;
		while (n != int(n) && count < 10000)
		{
			count++;
			n *= 10;
			floating_digits[count-1] = ((int)n) % 10;
		}
		std::cout << (double)1 / (double)i << " , " << count << std::endl;
		for (long int i = 0; i < count && floating_digits[i] != -8 ; i++)
		{
			std::cout << floating_digits[i];
		}
		std:: cout << std::endl;
	}
}