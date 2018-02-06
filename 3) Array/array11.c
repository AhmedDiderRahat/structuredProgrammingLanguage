//Write a Program to read an array and print the elements which ends with 5
#include <stdio.h>

int main()
{
    int i, n, s = 0;
    int x[10];

    for(i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &x[i]);
    }

    printf("\nThe numbers which are finish with 5: ");
    for(i = 0; i < 10; ++i)
    {
        if((x[i] % 2 != 0) && (x[i] % 5 == 0)){
            printf("%d ", x[i]);
            s = s ++;
        }
    }

    printf("\nThere are %d number which are finish with 5\n", s);

    return 0;
}
