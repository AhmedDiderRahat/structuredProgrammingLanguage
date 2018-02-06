//write a program to find the sum and average of 3 Number
#include <stdio.h>

int main()
{
    int x, y, z, s;
    double a; //Here, a is avarahe & s is summation

    x = 10;
    y = 20;
    z = 15;

    s = x + y + z;

    a = s / 3;

    printf("Sum is: %d \nAvarage is: %0.2lf\n\n", s, a);

    getch();

    return 0;
}
