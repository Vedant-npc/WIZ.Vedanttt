#include <stdio.h>
int main()
{
    int i, n,mul;

    printf("Enter Number");
    scanf("%d", &n);

printf("Table OF %d is \n", n);
    for (i = 1; i <=10; i++)
    {
       mul= n*i;
       printf("%d\n",mul);
    }
    
    return 0;
}