//Write a Program to calculate the factorial of n using do ... while loop.
#include <stdio.h>

int main()
{
    int a, b, f = 1;

    printf("Enter N: ");
    scanf("%d", &b);

    a = 1;
    do{
        f = f* a;
        a++;
    }
    while(a <= b);

    printf("Factorial %d = %d\n", b, f);

    return 0;
}
