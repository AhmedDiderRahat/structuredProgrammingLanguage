//Write a Program to to swap to number by using pointer
#include <stdio.h>

void swa(int *x, int *y);

main()
{
    int x, y;

    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    swa(&x, &y);

    printf("Reverse case: %d %d\n", x, y);

    return 0;
}

void swa(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

