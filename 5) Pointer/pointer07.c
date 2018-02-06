//Write a Program where pass an array by using pointer
#include <stdio.h>

void display(int *p);

int main()
{
    int x[] = {1, 3, 5, 7, 13};

    display(x);

    return 0;
}

void display(int *p)
{
    int i;

    for(i = 0; i < 5; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");
}
