//Write a Program to copy one string to another.
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

    strcpy(s1, s2);

    printf("\nS1 = %s \tS2 = %s\n", s1, s2);

    return 0;
}
