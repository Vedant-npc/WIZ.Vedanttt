#include <stdio.h>
int main()
{
    char o;
    float n1, n2, r;

    printf("Enter any operator");
    scanf("%c", &o);

    printf("Enter First Number:");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    switch (o)
    {
    case '+':
        r = n1 + n2;
        printf("Sum is %.3f", r);
        break;

    case '-':
        r = n1 - n2;
        printf("SUb is %.3f", r);

        break;
    case '*':
        r = n1 * n2;
        printf("Mul is %.3f", r);

        break;

    case '/':
        r = n1 / n2;
        printf("Div is %.3f", r);

        break;

    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}