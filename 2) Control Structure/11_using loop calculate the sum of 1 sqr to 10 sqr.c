//Write a Program to calculate the sum of 1 square to 10 square using for loop
#include <stdio.h>

int main()
{
    int a, sum = 0;

    for(a = 1; a <= 10; ++a){
        sum = sum + (a * a);
    }
    printf("Sum = %d\n", sum);

    return 0;
}
