//Write a Program to calculate the factorial of n using while loop.
#include <stdio.h>

int main()
{
    int a, b, f = 1;

    printf("Enter N: ");
    scanf("%d", &b);

    a = 1;
    while(a <= b){
        f = f* a;
        a++;
    }
    printf("Factorial %d = %d\n", b, f);

    return 0;
}

