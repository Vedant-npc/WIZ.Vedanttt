#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter Any Number: ");
    scanf("%d",&n);
    //for 0--> 1 star
   //for 1--> 3 star
   //for 2--> 5 star
   //for n--> 2*n+1 star
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
