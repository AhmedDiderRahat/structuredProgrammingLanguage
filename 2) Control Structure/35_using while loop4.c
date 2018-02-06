//Write a Program to calculate Fibonacci of n numbers using while loop.
#include <stdio.h>

int main()
{
    int c, i, n, a = 0, b = 1;

    printf("How many Fibonacci number you want: ");
    scanf("%d", &n);

    printf("\n%d %d ", a, b);

    i = 0;
    while(i < n - 2){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        ++i;
    }
    printf("\n");

    return 0;
}
