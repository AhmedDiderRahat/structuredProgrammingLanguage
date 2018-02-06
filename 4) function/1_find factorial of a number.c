//Write a Program that calculate factorial of a number using function.
#include <stdio.h>

int factorial(int x);

main()
{
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    y = factorial(x);

    printf("\nFactorial of %d is %d\n", x, y);
}

int factorial(int x)
{
    int i, f = 1;

    for(i = 1; i <= x; i++)
        f = f * i;

    return f;
}
