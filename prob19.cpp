# include<iostream>

enum days {sunday = 0 ,monday, tuesday, wednesday, thurssday, friday, saturady,};
std::string day_list[7] = { "sunday" , "monday", "tuesday", "wednesday", "thurssday", "friday", "saturady" };
int prob19()
{
	int sum = 0 , day , temp,sun_no;
	int rem = tuesday ;
	for (int i = 1903; i < 2003; i++)
	{
		if (i % 4 == 0 && (i % 100 == 0 && i % 400) == 0)
		{
			day = 366;

			switch (rem)
			{
			case 2: sun_no = 1 ; //check 1924
				break;
			case 3: sun_no = 2; //check 1908
				break;
			case 4: sun_no = 2; //check 1920
				break;
			case 0: sun_no = 3 ; // check 1928
				break;
			case 1: sun_no = 2 ; //check 1912
				break;
			case 5: sun_no = 1; //check 1904
				break;
			case 6: sun_no = 1; // check 1916
			}
		}
		else
		{
			day = 365;
			switch (rem)
			{
				case 2: sun_no = 2;
						break;
				case 3: sun_no = 1;
						break;
				case 4: sun_no = 3;
						break;
				case 0: sun_no = 2;
						break;
				case 1: sun_no = 2;
						break;
				case 5: sun_no = 1;
					    break;
				case 6: sun_no = 1;

			}
		}
		day -= (7-rem);

		sum += sun_no;
		rem =  (day % 7);
		
	}
	std::cout << sum << std::endl;
	//ans:171
	return 0;
}