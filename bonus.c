#include <stdio.h>

int main()
{
    int balance;
    float bonus, bonus2, bonus3;
    char depositor;

    printf("Enter the gender of the depositor (F for Female, M for Male): ");
    scanf(" %c", &depositor);

    printf("Enter the balance: ");
    scanf("%d", &balance);

    if (depositor == 'f' && balance >= 5000)
    {
        bonus = 0.05*balance;
        printf("Bonus for female is %.2f\n", bonus); 
    }
    else if (depositor == 'm' && balance > 5000)
    {
        bonus2 = 0.05*balance;
        printf("Bonus for male is %.2f\n", bonus2);
    }
    else if (depositor == 'm' || depositor == 'f' && balance < 5000)
    {
        bonus3 = 0.02*balance;
        printf("Bonus is %.2f\n", bonus3);
    }
    else
    {
        printf("Ok\n");
    }

     return 0;
}