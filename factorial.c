#include <stdio.h>
int main()
{
    int n, i, mul = 1;

    printf("Enter a number");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            mul *= i;
        }

        printf("factorial of %d is %d",n, mul);
    }
    

    return 0;
}