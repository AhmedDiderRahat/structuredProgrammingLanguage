//Write a Program to read and print a structure array.
#include <stdio.h>

int main()
{

    int i;

    struct coustomar{
        char name[80];
        double acn;
        long balanc;
    }c[3];

    for(i = 0; i < 3; i++){
        printf("Enter Name: ");
        scanf("%s", c[i].name);
        printf("Enter Account no: ");
        scanf("%lf", &c[i].acn);
        printf("Enter your balance: ");
        scanf("%ld", &c[i].balanc);
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        printf("%s\n", c[i].name);
        printf("Account No: %0.0lf\n", c[i].acn);
        printf("Balance: %ld\n", c[i].balanc);
        printf("\n");
    }

    return 0;
}
