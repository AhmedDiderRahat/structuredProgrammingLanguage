//Write a Program to read a file EOF.
#include <stdio.h>

int main()
{
    int i, x;
    FILE *fp;

    fp = fopen("new_file1.txt", "r");

    while(!feof(fp)){
        fscanf(fp, "%d\n", &x);
        printf("%d\n", x);
    }

    return 0;
}
