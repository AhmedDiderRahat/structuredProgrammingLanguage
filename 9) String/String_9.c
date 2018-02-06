//Write a Program to calculate the length of a string (Library Function).
#include <stdio.h>
#include <string.h>

int main()
{
    int l;
    char s1[40];

    printf("Enter a string: ");
    gets(s1);

    l = strlen(s1);

    printf("\nThere are %d character in the string.\n", l);

    return 0;
}


