//Write a Program to which contains break statement.
#include <stdio.h>

int main()
{
    int a;

    for(a = 1; a <= 10; a++)
    {
        if(a == 5){
            break;
        }
        printf("%d ", a);
    }

    return 0;
}

