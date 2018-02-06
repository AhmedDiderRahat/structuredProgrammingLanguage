//write a program to find the compound interest
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, p, n, i, f;

    printf("Enter the amount of Principal: ");
    scanf("%lf", &p);
    printf("Enter number of Year: ");
    scanf("%lf", &n);
    printf("Enter Interest Rate: ");
    scanf("%lf", &i);

    f = (p * (pow((1 + (i/100)),n)));

    printf("\nThe Final Result is: %lf\n\n", f);

    getch();

    return 0;
}

