//Write a Program to read two matrix and find the summation of them.
#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3], b[3][3], c[3][3];

    //Read two Matrix....
    printf("Enter first matrix: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; ++j){
            printf("element (%d, %d) = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    printf("Enter second matrix: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; ++j){
            printf("element(%d, %d) = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    //printing the sum. of the two matrix
    printf("The Sum. of the two matrix is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; ++j){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
