//Write a Program that calculate logarithm of a number.
#include <stdio.h>
#include <math.h>

main()
{
    float x, y;

    printf("Enter a number: ");
    scanf("%f", &x);

    y = log(x);

    printf("\nlog of %0.2f is %0.2f\n", x, y);

    return 0;
}

