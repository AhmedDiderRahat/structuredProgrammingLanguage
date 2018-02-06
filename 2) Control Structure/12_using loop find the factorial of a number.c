//Write a Program to calculate the factorial of a number.
#include <stdio.h>

int main()
{
    int a, n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(a = 1; a <= n; ++a){
        fact = fact * a;
    }
    printf("The Factorial of %d is %d\n", n, fact);

    return 0;
}
