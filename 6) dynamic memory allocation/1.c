//Write a Program to implements dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    int *x;

    printf("How many you want to print: ");
    scanf("%d", &n);

    x = (int *)malloc(n * sizeof(int));

    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", (x + i));
    }
    printf("\n");

    for(i = 0; i < n; i++){
        printf("Number %d = %d\n", (i + 1), *(x + i));
    }

    return 0;
}

