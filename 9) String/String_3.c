//Write a Program to calculate the length of a string.
#include <stdio.h>

int main()
{
    int i;

    char str[80];

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++);

    printf("%d", i);

    return 0;
}


