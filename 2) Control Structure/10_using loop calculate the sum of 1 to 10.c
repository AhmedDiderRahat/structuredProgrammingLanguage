//Write A Program to calculate the sum of 1 to 10 using for loop
#include <stdio.h>

int main()
{
    int a, sum = 0;

    for(a = 1; a <= 10; ++a){
        sum = sum + a;
    }
    printf("Sum = %d\n", sum);

    return 0;
}
