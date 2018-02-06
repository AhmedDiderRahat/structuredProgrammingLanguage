//Write A Program to print 5 10 15 ... 50 using for loop
#include <stdio.h>

int main()
{
    int a;

    for(a = 5; a <= 50; a += 5)
    {
        printf("%d ", a);
    }

    printf("\n");

    return 0;
}

