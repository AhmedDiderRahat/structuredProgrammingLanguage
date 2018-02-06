//Write a Program to find the position of a character in a string.
#include <stdio.h>

int main()
{
    int i, n, j, x = 0;
    char str[80];
    char ch;
    char *r;
    r = &ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter your character: ");
    ch = getchar();

    for(i = 0; str[i] != '\0'; i++);
    n = i;

    for(j = 0; j < n; j++)
    {
        x = x + 1;
        if(str[j] == *r)
           break;
    }
    printf("%d\n", x);

    return 0;
}

