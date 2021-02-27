# include <iostream>


int prob7()
{
    long long int i, j, prime_count=1;
    long long int prime[100000] = { 2 };
    for (i = 3; prime_count <= 10001; i+=2)
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
            prime[prime_count++] = i;
        }

    }
    std::cout << prime[10000];
    return 0;
}