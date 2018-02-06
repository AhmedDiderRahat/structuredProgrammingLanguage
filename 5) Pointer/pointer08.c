//Write a Program to manipulate an array by using pointer
#include <stdio.h>

void display(int *p);

main()
{
    int x[] = {1, 2, 5, 7, 13};

    display(x);
}

void display(int *p)
{
    int i, s = 0;

    for(i = 0; i < 5; i++){
        s = s + *(p + i);
    }
    printf("Sum = %d\n", s);
}
