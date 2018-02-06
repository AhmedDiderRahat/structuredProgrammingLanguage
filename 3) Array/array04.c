//Write a Program to read an array and search an item (efficient).
#include <stdio.h>

int main()
{
    int a, n, nf;
    int i[5];

    for(a = 0; a < 5; a++){
        printf("Enter a number: ");
        scanf("%d", &i[a]);
    }

    printf("\nEnter the searching number: ");
    scanf("%d", &n);

    for(a = 0; a < 5; a++){
        if(n == i[a]){
            nf = 0;
        }
    }

    if(nf == 0){
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }

    return 0;
}

