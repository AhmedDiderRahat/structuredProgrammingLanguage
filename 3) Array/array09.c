//Write a Program to read two matrix and find the multiplication of them.
#include <stdio.h>

int main()
{
    int i, j, k, sum;
    int a[3][3], b[3][3], c[3][3];

    //Read two Matrix....
    printf("Enter first matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; ++j){
            printf("element (%d, %d) = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    //printing the multiplication of the two matrix...
    printf("Enter second matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; ++j){
            printf("element(%d, %d) = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    printf("The Multiplication of the two matrix is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; ++j)
        {
            sum = 0;
            for(k = 0; k < 3; k++){
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
