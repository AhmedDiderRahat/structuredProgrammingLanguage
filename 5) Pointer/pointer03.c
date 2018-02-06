//Write a Program to implement pointer casting
#include<stdio.h>

int main()
{
    float data = 10.375;
    char *ptr;

    ptr = (char *) &data;

    printf("%x\n", *ptr);
    ++ptr;
    printf("%x\n", *ptr);
    ++ptr;
    printf("%x\n", *ptr);
    ++ptr;
    printf("%x\n", *ptr);


    return 0;
}
