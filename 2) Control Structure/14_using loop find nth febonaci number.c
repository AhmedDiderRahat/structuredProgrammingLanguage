//Write a Program to print first nth fibonacci numbers.
#include <stdio.h>

int main()
{
    int a, b, c, i, n;

    a = 0;
    b = 1;

    printf("How many fibonacci number you want: ");
    scanf("%d", &n);

    printf("\n%d %d ", a, b);

    for(i = 0; i < n - 2; ++i){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
