//Write a Program to which contains continue statement.
#include <stdio.h>

int main()
{
    int a;

    for(a = 1; a <= 10; a++)
    {
        printf("%d ", a);
        if(a == 5){
            continue;
        }
    }

    return 0;
}

