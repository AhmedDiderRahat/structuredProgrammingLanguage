//Write a Program to calculate sum and average of five numbers using for loop.
#include <stdio.h>

int main()
{
    int a, num, sum = 0;
    float avr;

    for(a = 0; a < 5; a++){
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
    }
    avr = sum / 5.0;
    printf("\nSum =  %d \tAvarage = %0.2f", sum, avr);

    printf("\n");

    return 0;
}
