//Write a Program to read an array by using pointer
#include <stdio.h>

int main()
{
    int i, x[10] = {10, 5, 15, 6, 3, 2};
    int *p;

    p = x;

    for(i = 0; i < 6; ++i){
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

