//Write a Program to concatenate two string.
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40];
    char s2[40];

    printf("Enter a string: ");
    gets(s1);

    printf("Enter a string: ");
    gets(s2);

    strcat(s2, s1);

    printf("\nS1 = %s\n", s2);

    return 0;
}

