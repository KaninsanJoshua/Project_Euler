#include<iostream>


int prob10()
{
    long long int i, j, prime_count = 0;
    long int prime[200000] = { 2 };
    long long sum = 0;
    for (i = 3; i<2000000; i += 2)
    {

        for (j = 0; j < prime_count; j++)
        {
            if (!(i % prime[j]))
            {
                break;
            }
        }
        if (j == prime_count)
        {
            sum += prime[prime_count];
            prime[++prime_count] = i; 
        }
        if (prime_count % 10000 == 0)
        {
            std::cout << prime_count << std::endl;
        }

    }
    std::cout << sum + prime[prime_count] << std::endl;
    // ans = 142913828922
    return 0;
}