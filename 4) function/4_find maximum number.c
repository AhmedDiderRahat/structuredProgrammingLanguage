//Write a Program that find maximum number using function.
#include <stdio.h>

int maximum(int x, int y);

main()
{
    int m, x, y;

    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    m = maximum(x, y);

    printf("Maximum Number = %d\n", m);
}

int maximum(int x, int y)
{
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}



