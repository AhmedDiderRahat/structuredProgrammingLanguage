//Write a Program to print pattern_8.
#include <stdio.h>

int main()
{
    int a, b, n;

    printf("Enter Your Choice: ");
    scanf("%d", &n);

    if(n == 1){
        printf("*\n");
    }

    else{
        for(a = 0; a < n; a++){
            printf("* ");
        }
        printf("\n");

        for(a = 0; a < n - 2; a++){
            for(b = 1; b <= n; ++b){
                if(b == 1 || b == n){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }

        for(a = 0; a < n; a++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
