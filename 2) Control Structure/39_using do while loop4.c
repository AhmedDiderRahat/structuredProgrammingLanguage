//Write a Program to calculate the sum of five numbers using do ... while loop.
#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    a = 0;
    do{
        printf("Enter a number: ");
        scanf("%d", &b);
        sum = sum + b;

        a++;
    }
    while(a < 5);

    printf("Sum = %d\n", sum);

    return 0;
}

