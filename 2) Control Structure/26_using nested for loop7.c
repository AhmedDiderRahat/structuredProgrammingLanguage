//Write a Program to print pattern_5.
#include <stdio.h>

int main()
{
    int i, j, a, b;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    for(a = 5; a >= 1; a--)
    {
        for(b = 1; b <= a; b++){
            printf("%d ", b);
        }
        printf("\n");
    }

    return 0;
}
