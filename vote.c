#include <stdio.h>
int main()
{
    int i = 18, n;

    printf("Enter your age");
    scanf("%d", &n);

    if (n > i)
    {

        printf("Eligible for voting");
    }
    else
    {

        printf("Not Eligible for voting");
    }

    return 0;
}