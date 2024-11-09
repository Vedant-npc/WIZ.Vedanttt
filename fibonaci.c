#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, t, a, i;

    printf("Enter Any number");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {

        t = n1 + n2;

        printf("%d", t);

        n1 = n2;
        n2 = t;

        printf(",");
    }

    return 0;
}