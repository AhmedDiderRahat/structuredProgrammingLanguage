//Write a Program to calculate the sum of 1 to N using while loop.
#include <stdio.h>

int main()
{
    int a, b, s = 0;

    printf("Enter N: ");
    scanf("%d", &b);

    a = 1;
    while(a <= b)
    {
        s = s + a;
        a++;
    }
    printf("Sum = %d\n", s);

    return 0;
}
