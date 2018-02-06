//Write A Program to compare a number with 100
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a > 100){
        printf("\n%d is greater than 100\n", a);
    }
    else if(a == 100){
        printf("\n%d equal to 100\n", a);
    }
    else{
        printf("\n%d is smaller than 100\n", a);
    }

    return 0;
}

