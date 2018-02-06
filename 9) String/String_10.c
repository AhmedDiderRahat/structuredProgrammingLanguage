//Write a Program to reverse a string (Library Function).
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40];

    printf("Enter a string: ");
    gets(s1);

    strrev(s1);

    printf("\nThe reverse string = %s\n", s1);

    return 0;
}



