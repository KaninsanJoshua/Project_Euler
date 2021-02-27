

#include<iostream>
#include<array>
unsigned long long int grid[50][50] = { 1 };
unsigned long long int explore(long long int endx, long long int endy)
{
		unsigned long long int right = 0, down = 0;
		if (grid[endx][endy] != 0)
		{
			return grid[endx][endy];
		}
		if (endx > 0)
		{
			right = explore(endx-1, endy);
		}
		if (endy > 0)
		{
			down = explore(endx, endy-1);
		}
		grid[endx][endy] = right + down;
		return right + down;
}
	
	int dp_explore(long long int startx, long long int starty,int endx,int endy)
	{
		
		for (int i = 0; i <= endx; i++)
		{
			grid[0][i] = 1;
			grid[i][0] = 1;
		}
		for (int i = 0; i <= endx; i++)
		{
			for (int j = 0; j <= endy; j++)
			{

				std::cout << grid[i][j];
			}
			std::cout << std::endl;
		}
		for (int i = 1; i <= endx; i++)
		{
				for (int j = 1; j <= endy; j++)
				{	
					
						grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
				}
		}
		return grid[endx][endy];
	}

int prob15()
{
		
		explore(40, 40);
		

			std::cout<< grid[20][20] << std::endl;

		//ans: 137846538820
		return 0;
}