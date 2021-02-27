# include<iostream>


int prob14()
{
	long long int start , max = 1 , num ,v=0;
	for (long long int i = 1; i < 1000000; i++)
	{
		start = i;
		if (i % 100000 == 0 )
		{
			std::cout << v << " , " << i << std::endl;
			v++;
		}
		long long count = 0;
		while (start-1)
		{
			if (start & 1)
			{
				
				start *= 3;
				start++;
			}
			else
			{
				start /= 2;
			}
			
			count++;
		}
		if (max < count)
		{
			max = count;
			num = i;
		}
	}
	std::cout << num << std::endl;
	// ans: 837799
	return 0;
}