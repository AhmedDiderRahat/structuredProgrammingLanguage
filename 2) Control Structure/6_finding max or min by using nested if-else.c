//Write A Program to find the maximum number
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("Enter another number: ");
    scanf("%d", &c);

    if(a >= b){
        if(a >= c){
            printf("%d is Max\n", a);
        }
        else{
            printf("%d is Max\n", c);
        }
    }

    else if(a <= b){
        if(b >= c){
            printf("%d is Max\n", b);
        }
        else{
            printf("%d is Max\n", c);
        }
    }

    return 0;
}
