#include<iostream>
#include<string>

std::string ones_digit[10] = { " ", "one","two","three","four","five","six","seven","eight","nine"};
std::string tens_digit[10] = { "ten", "eleven","twelve","thirteen","fourteen","fivteen","sixteen","seventeen","eighteen","nineteen" };
std::string ones_tens[10] = { " ", "ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };

int prob17()
{
	int temp, sum = 11;
	for (int i = 1; i < 1000; i++)
	{
		temp = i;
		if (temp / 100)
		{
			std::cout<<ones_digit[temp / 100];
			sum += ones_digit[temp / 100].length();
			std::cout << " hundred ";
			sum += 7;
			if ((i % 100))
			{
				std::cout << "and ";
				sum += 3;
			}
			temp = temp % 100;
		}
		if (temp / 10)
		{
			if (temp / 10 == 1)
			{
				std::cout << tens_digit[temp % 10];
				sum += tens_digit[temp % 10].length();
				temp = 0;
			}
			else
			{
				std::cout << ones_tens[temp / 10] << " " ;
				sum += ones_tens[temp / 10].length();
			}
			temp = temp % 10;
		}
		if (temp)
		{
			std::cout << ones_digit[temp] ;
			sum += ones_digit[temp].length();
		}
		std:: cout << std:: endl;
	}
	std::cout << sum << std::endl;
	return 0;
}