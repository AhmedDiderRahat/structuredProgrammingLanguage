//Write a Program to find a number is prime or not.
#include <stdio.h>

int main()
{
    int pr, n, i;

    pr = 1;

    printf("Enter Your Number: ");
    scanf("%d", &n);

    for(i = 2; i <= n-1; i++){
        if(n % i == 0){
            pr = 0;
        }
    }

    if(pr == 1){
        printf("Prime\n");
    }
    else{
        printf("Not prime\n");
    }

    return 0;
}
