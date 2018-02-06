//Write a Program to sort an array of string.
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    char x[5][80];
    char temp[80];

    for(i = 0; i < 5; i++){
        printf("Enter a String: ");
        gets(x[i]);
    }
    printf("\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            k = strcmp(x[j], x[j + 1]);
            if(k > 0)
            {
                strcpy(temp , x[j]);
                strcpy(x[j] , x[j + 1]);
                strcpy(x[j + 1] , temp);
            }
        }
    }

    printf("\nThe output is: \n");
    for(i = 0; i < 5; i++){
        puts(x[i]);
    }

    return 0;
}



