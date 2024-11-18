#include <stdio.h>

int main()
{
    int n, marks, o=0, f=0, s=0, t=0, fail=0, i;
    printf("enter number of studets :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter mark of %d student: ", i + 1);
        scanf("%d", &marks);
    }

    if (marks >= 80 && marks <= 100)
    {
        o++;
    }
    else if (marks >= 70 && marks <= 79)
    {
        f++;
    }
    else if (marks >= 60 && marks <= 69)
    {
        s++;
    }
    else if (marks >= 50 && marks <= 59)
    {
        t++;
    }
    else if (marks >= 40 && marks <= 49)
    {
        fail++;
    }

    printf("number of students in outstanding %d\n", o);
    printf("number of students in first class %d\n", f);
    printf("number of students in second class %d\n", s);
    printf("number of students in thisrd class %d\n", t);
    printf("number of students in fail %d\n", fail);

    return 0;
}