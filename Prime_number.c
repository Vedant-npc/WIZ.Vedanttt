#include<stdio.h>

int main()
{
    int n,i,prime=0;
    
    printf("Enter a  number");
    scanf("%d",&n);

    for ( i = 2; i <n; i++)
    {
       if (n%i==0)
       {
        prime=1;
       }
        
    }
    

    if (prime)
    {
        printf("this is not prime number");
    }
    else
    printf("this is a prime number");
    return 0;
}
