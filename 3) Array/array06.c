//Write a Program to read a matrix and print it.
#include <stdio.h>

int main()
{
    int i, j, x[3][3];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; ++j){
            printf("Enter Element (%d,%d): ", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }

    printf("The Matrix is:\n\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; ++j){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
