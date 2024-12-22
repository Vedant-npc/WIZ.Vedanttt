#include<stdio.h>

int main()
{
    int temp,k=5,arr[5],i,j;


    for ( i = 0; i < k; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < k-1; i++)
    {
        for ( j = 0; j< k-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("arranged numbers: ");
    
    for ( i = 0; i < k; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}