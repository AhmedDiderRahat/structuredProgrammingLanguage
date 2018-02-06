//Write a Program to calculate the geometric mean of five numbers.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, prod = 1;
    double g, i;

    for(a = 1; a <= 5; ++a)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        prod = prod * n;
    }
    i = 1.0 / 5;
    g = pow(prod, i);

    printf("Geometric Average = %0.3lf\n", g);

    return 0;
}
