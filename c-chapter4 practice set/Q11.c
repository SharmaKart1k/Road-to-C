// 11. Program 10 using other types of loops......while loop and do-while loop
// while loop
#include <stdio.h>
int main()
{
    int n;
    int i = 2;
    int not_prime = 0;
    printf("enter a number to check if its is prime no or not: \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime no\n", n);
    }
    else
    {
        printf("%d is a prime no\n", n);
    }

    return 0;
}