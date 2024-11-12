#include <stdio.h>
int main()
{
    char b;

    printf("Enter alphabet: ");
    scanf("%c", &b);

    switch (b)
    {
    case 'a':

        printf("This is vowel");
        break;

    case 'e':

        printf("This is vowel");
        break;

    case 'i':

        printf("This is vowel");
        break;

    case 'o':

        printf("This is vowel");
        break;
    case 'u':

        printf("This is vowel");
        break;

    default:
        printf("This is not a vowel");
        break;
    }
    return 0;
}