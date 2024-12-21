#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char rev[100];
    char pal[100];

    printf("Enter any word: ");
    scanf("%s",&pal);

    len = strlen(pal);
    printf("length of the word is: %d\n", len);

    for (i = 0; i < len; i++)
    {
        rev[i] = pal[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reverse of the word is: %s\n", rev);

    if (strcmp(pal, rev) == 0)
    {
        printf("This word is a PALINDROM");
    }

    else
        printf("This word is not a PALINDROM");

    return 0;
}