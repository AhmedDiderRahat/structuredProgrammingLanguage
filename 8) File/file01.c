//Write a Program to write a file.
#include <stdio.h>

main()
{
    int i;
    FILE *fp;

    fp = fopen("new_file1.txt", "w");

    for(i = 1; i <= 20; i++)
        fprintf(fp, "%d\n", i);

    fclose(fp);

    return 0;
}

