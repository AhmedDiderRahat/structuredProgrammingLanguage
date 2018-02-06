//Write a Program to calculate the sum of 1 to 10 using do ... while loop.

#include <stdio.h>

int main()
{
    int a, b, s = 0;

    printf("Enter N: ");
    scanf("%d", &b);

    a = 1;
    do{
        s = s + a;

        a++;
    }
    while(a <= b);

    printf("Sum = %d\n", s);

    return 0;
}

