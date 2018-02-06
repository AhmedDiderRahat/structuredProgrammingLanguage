//write a program to find the root(s) of an quadratic equation
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double x1, x2;

    printf("In equation ax^2 + bx + c Enter: ");
    printf("\na = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    x1 = (- b + sqrt((b*b) - (4 * a * c))) / (2 * a);

    x2 = (- b - sqrt((b*b) - (4 * a * c))) / (2 * a);

    printf("\nx1 = \t%0.3lf \nx2 = \t%0.3lf\n\n", x1, x2);

    getch();

    return 0;
}
