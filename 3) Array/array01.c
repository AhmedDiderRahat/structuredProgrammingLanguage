//Write a Program to read and write an array.
#include <stdio.h>

int main()
{
    int i;
    int r[5];

    for(i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d", &r[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d ", r[i]);
    }

    return 0;
}
