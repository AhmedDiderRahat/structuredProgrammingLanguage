//Write a Program to compare two string (Library Function).
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40];
    char s2[40];
    int k;

    printf("Enter a string: ");
    gets(s1);

    printf("Enter a string: ");
    gets(s2);

    k = strcmp(s1, s2);

    printf("\n%d\n", k);

    return 0;
}


