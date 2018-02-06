//Write a Program to read an array and sort it ascending order.
#include <stdio.h>

int main()
{
    int i, j, t;
    int x[5];

    for(i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            if(x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }

    for(j = 0; j < 5; j++){
        printf("%d ", x[j]);
    }

    return 0;
}
