// 10. Write a program to check whether a given number is prime or not using loops.
// A prime number is a number which is devided by 1 or itself
#include <stdio.h>
int main()
{
    int n;
    int not_prime = 0;
    printf("Enter number to check if no is prime no or not: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}