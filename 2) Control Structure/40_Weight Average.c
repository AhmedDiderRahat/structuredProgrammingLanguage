//Write a Program to calculate the weighted average of n numbers.
#include <stdio.h>

int main()
{
    int a, f, x, n;
    double c, d, e;

    c = 0.0;
    d = 0.0;

    printf("How many number you want to input: ");
    scanf("%d", &n);

    for(a = 1; a <= n; a++){
        printf("Enter f%d: ", a);
        scanf("%d", &f);
        printf("Enter x%d: ", a);
        scanf("%d", &x);

        c = c + (f*x);
        d = d + f;
    }

    e = (c / d);

    printf("\nWeight Average = %0.3lf\n", e);

    getch();

    return 0;
}
