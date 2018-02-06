//Write A Program to find Even or Odd number
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is a even number\n", n);
    }
    else{
        printf("%d is a odd number\n", n);
    }

    return 0;
}
