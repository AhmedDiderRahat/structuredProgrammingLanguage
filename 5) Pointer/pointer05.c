//Write a Program to print an array by using pointer
#include<stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9, '\0'};
    int*ptr;
    ptr = arr;

    while(*ptr != '\0'){
        printf("%d\t", *ptr);
        ptr++;
    }

    return 0;
}
