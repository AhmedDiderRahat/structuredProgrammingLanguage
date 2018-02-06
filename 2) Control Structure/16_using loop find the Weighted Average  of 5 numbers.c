//Write a Program to calculate the weighted average of n numbers.
#include <stdio.h>

int main()
{
    int n, i, f, x;
    double ft, prd, wa;

    ft = 0.0;

    prd = 0.0;

    printf("How many number's weighted average you want: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("f%d = ", i);
        scanf("%d", &f);
        printf("x%d = ", i);
        scanf("%d", &x);

        prd = prd + (f * x);
        ft = ft + f;
    }

    wa = (prd / ft);
    printf("\nWeighted Average = %0.2lf\n", wa);

    return 0;
}
