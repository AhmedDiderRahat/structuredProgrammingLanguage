//Write a Program to reverse a string.
#include <stdio.h>

int main()
{
    int i, j;
    char str[80];

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++);

    for(j = i - 1; j >= 0; j--){
        printf("%c", str[j]);
    }

    return 0;
}
