//Write a Program to read a matrix and calculate the sum of each elements of it
#include <stdio.h>

int main()
{
    int i, j, x[3][3];
    int sum = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; ++j){
            printf("Enter Element (%d,%d): ", i, j);
            scanf("%d", &x[i][j]);
            sum = sum + x[i][j];
        }
        printf("\n");
    }

    printf("Sum = %d", sum);

    return 0;
}
