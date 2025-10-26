#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check  is it prime or not prime :");
    scanf("%d", &n);
    int not_prime = 0;
    if (n <= 1) // 0 and 1 are not prime
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        do
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
        // int i = 2;
        // while (i < n)
        // {
        //     if (n % i == 0)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }
    }
    if (not_prime)
    {
        printf("%d is  not prime\n", n);
    }
    else
    {
        printf("%d is a prime number ", n);
    }

    return 0;
}
/* #include <math.h> // Include for square root function
    // AND SOME MINOR CHANGE IN FOR LOOP LIKE BELOW LINES
    // Only check divisors up to the square root of n
        for (int i = 2; i <= sqrt(n); i++) */