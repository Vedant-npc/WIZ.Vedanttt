#include <stdio.h>
int main()
{
    float b,hra,da,t;

    printf("Enter Basic Salary");
    scanf("%f",&b);
    
    hra=b*0.2;
    printf("Housing Allowance is %.2f\n",hra);

    da=b*1.5;
    printf("Downing allowance is %.2f\n",da);

    t=b+hra+da;
    printf("Total salary is %.2f",t);
    
       return 0;
}