#include <stdio.h>
int main()
{
    int n, i, mul, sum = 0;

    printf("Enter any number");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        sum += n * i;
    }

    printf("SUM of all the terms in table of %d is %d", n, sum);

    return 0;
}
