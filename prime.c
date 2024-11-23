#include <stdio.h>

int main()
{
    int n, i, prime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
            }
        }
    }
    if (prime)
    {
        printf("This is a not a prime number");
    }
    else
        printf("This is a prime number");

    return 0;
}