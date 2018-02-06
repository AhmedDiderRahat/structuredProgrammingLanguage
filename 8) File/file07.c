//Write a Program to copy a source file to another.
#include <stdio.h>

int main()
{
    char x;
    FILE *fp1, *fp2;

    fp1 = fopen("file01.c", "r");
    fp2 = fopen("file08.c", "w");

    while(!feof(fp1)){
        fscanf(fp1, "%c", &x);
        fprintf(fp2, "%c", x);
    }

    return 0;
}
