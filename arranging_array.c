#include<stdio.h>

int main()
{
    int i,j,temp;
    int arr[]={3,6,4,1,78,32,0};
    int n=sizeof(arr);

    for ( i = 0; i <n-1; i++)
    {
        for ( j = 0; j <n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("Arranged array: ");
    for ( i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}