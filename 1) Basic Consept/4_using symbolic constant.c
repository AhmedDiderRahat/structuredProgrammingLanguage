//write a program to using Symbolic Constant Convert dollar to taka.
#include <stdio.h>
#define RATE 79

int main()
{
    int taka, dollar;

    dollar = 100;

    taka = RATE * dollar;

    printf("%d Dollars = %d Taka\n\n", dollar, taka);

    getch();

    return 0;
}

