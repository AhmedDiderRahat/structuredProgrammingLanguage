//Write a Program to print 1 to 10 using do ... while loop.
#include <stdio.h>

int main()
{
    int a;

    a = 1;
    do{
        printf("%d ", a);
        a++;
    }
    while(a <= 10);

    return 0;
}
