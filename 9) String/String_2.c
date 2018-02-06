//Write a Program to read and print a string array.
#include <stdio.h>

int main()
{
    int i;
    char str[5][80];

    for(i = 0; i < 5; i++){
        printf("Enter a String: ");
        gets(str[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++)
        puts(str[i]);

    printf("\n");


    //for(i = 0; i < 5; i++){
     //   printf("%s\n", (str + i));
    //}

    return 0;
}



