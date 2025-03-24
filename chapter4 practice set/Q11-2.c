// now by usong do while loop
#include <stdio.h>
int main()
{
    int i = 2, not_prime = 0, n;
    printf("Enter a no to if it is prime no or not: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
            }
            i++;
            break;
        } while (i < n);
    }
    if (not_prime)
    {
        printf("%d is not a prime no\n", n);
    }
    else
    {
        printf("%d is a prime no\n", n);
    }
}