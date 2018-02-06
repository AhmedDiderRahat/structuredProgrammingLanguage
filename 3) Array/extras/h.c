#include <stdio.h>

#define ROWS 3
#define COLUMNS 4

void sub1(int z[][COLUMNS]);

main()
{
    int a, b;
    static int z[ROWS][COLUMNS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    sub1(z);

    for(a = 0; a < ROWS; a++){
        for(b = 0; b < COLUMNS; ++b)
            printf("%d ", z[a][b]);
        printf("\n");
    }
}

void sub1(int x[][COLUMNS])
{
    int a, b;

    for(a = 0; a < ROWS; a++)
    {
        for(b = 0; b < COLUMNS; ++b)
            if((x[a][b] % 2) == 1)
                x[a][b]--;
        }

    return;
}
