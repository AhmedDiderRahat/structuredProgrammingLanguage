//Write a Program to print first 12 fibonacci numbers.
#include <stdio.h>

int main()
{
    int a, b, c, i;

    a = 0;
    b = 1;

    printf("%d %d ", a, b);

    for(i = 0; i < 10; ++i){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
