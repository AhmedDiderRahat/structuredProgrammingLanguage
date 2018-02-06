//Write a Program to read an array and search an item.
#include <stdio.h>

int main()
{
    int a, n;
    int i[5];

    for(a = 0; a < 5; a++)
    {
        printf("Enter a number: ");
        scanf("%d", &i[a]);
    }

    printf("\nEnter the searching number: ");
    scanf("%d", &n);

    for(a = 0; a < 5; a++)
    {
        if(n == i[a]){
            printf("Found\n");
        }
    }

    return 0;
}
