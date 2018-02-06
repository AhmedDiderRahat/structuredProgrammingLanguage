//Write a Program that use a pointer
#include <stdio.h>

int main()
{
    int *p;
    int x, y;

    x = 10;
    p = &x;
    y = *p;

    printf("Value of x is = %d\n", x);
    printf("Value of p or address of x is = %d\n", p);
    printf("Value of y is = %d\n", y);

    return 0;
}
