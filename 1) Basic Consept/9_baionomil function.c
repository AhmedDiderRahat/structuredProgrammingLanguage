//write a program to find the root(s) of an quadratic equation
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double x1, x2, m, n, o, p;

    printf("Enter the coefficient of x*x : ");
    scanf("%d", &a);
    printf("Enter the coefficient of x : ");
    scanf("%d", &b);
    printf("Enter the constant : ");
    scanf("%d", &c);

    m = b * b * 1.0;
    n = 4.0 * a * c;
    o = m - n;
    p = sqrt(o);

    x1 = (- b + p) / (2.0 * a);
    x2 = (- b - p) / (2.0 * a);

    printf("\nx1 = %0.3lf\tx2 = %0.3lf\n\n", x1, x2);

    return 0;
}
