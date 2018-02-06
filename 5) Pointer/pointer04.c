//Write a Program to print an array by using pointer
#include<stdio.h>

int main()
{
    int i, arr[] = {1, 3, 5, 7, 9};

    int *p;
    p = arr;

    for(i=0; i<5; i++){
        printf("%d\t", *p);
        *p++;
    }

    printf("\n");
    p = &arr[4];

    for(i=0; i<5; i++){
        printf("%d\t", *p);
        *p--;
    }
    printf("\n");

    return 0;
}
