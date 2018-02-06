//write a program to find the compound interest
#include <stdio.h>
#include <math.h>

int main()
{
    double p, n, i, a, b, c, f;

    printf("Enter the Amount of Principle: ");
    scanf("%lf", &p);

    printf("Enter the year: ");
    scanf("%lf", &n);

    printf("Enter the Interest Rate: ");
    scanf("%lf", &i);

    a = i / 100;
    b = 1 + a;
    c = pow(b , n);

    f = p * c;

    printf("\nThe Final Result is: %0.2lf\n\n", f);

    getch();

    return 0;
}
