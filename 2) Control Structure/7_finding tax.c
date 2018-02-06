//Write A Program to calculate the income tax
#include <stdio.h>

int main()
{
    double a, b, c, d, e, f, g;

    printf("Enter your basic yearly salary: ");
    scanf("%lf", &a);

    if(a <= 200000)
    {
        printf("Your income text is nill\n");
    }
    else if(a > 200000)
    {
        b = a - 200000;
        if(b <= 200000)
        {
            c = b * 0.10;
            printf("Your text is: %0.2lf\n", c);
        }

        else if(b > 200000)
        {
            c = b - 200000;
            d = (200000 * 0.10) + (c * 0.15);

            if(c <= 200000)
            {
                printf("your text is: %0.2lf\n", d);
            }
            else if(c > 200000)
            {
                e = c - 200000;
                f = e * 0.25;
                g = ( (200000 * 0.1) + (200000 * 0.15) + f);
                printf("your income text is: %0.2lf\n", g);
            }
        }
    }

    return 0;
}
