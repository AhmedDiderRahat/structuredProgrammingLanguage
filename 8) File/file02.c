//Write a Program to read a file.
#include <stdio.h>

int main()
{
    int i, x;
    FILE *fp;

    fp = fopen("new_file1.txt", "r");

    for(i = 0; i < 10; i++){
        fscanf(fp, "%d", &x);
        printf("%d\n", x);
    }

    return 0;
}

