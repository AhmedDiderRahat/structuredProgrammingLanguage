//Write a Program to compare two number
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    if(a > b){
        printf("%d is greater then %d\n", a, b);
    }
    else{
        printf("%d is greater then %d\n", b, a);
    }

    return 0;
}
