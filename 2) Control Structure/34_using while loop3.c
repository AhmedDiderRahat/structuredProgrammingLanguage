//Write a Program to calculate sum of 5 numbers using while.
#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    a = 0;
    while(a < 5){
        printf("Enter a number: ");
        scanf("%d", &b);
        sum = sum + b;
        a++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

