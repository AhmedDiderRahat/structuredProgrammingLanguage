//its the copy file of file.04
#include <stdio.h>

int main()
{
    char x;
    FILE *fp;

    fp = fopen("file04.c", "r");

    while(!feof(fp)){
        fscanf(fp, "%c", &x);
        printf("%c", x);
    }

    return 0;
}

