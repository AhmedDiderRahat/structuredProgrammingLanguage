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

    strcat(s1, s2);

    puts(s1);

    return 0;
}
