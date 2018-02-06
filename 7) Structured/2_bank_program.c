//Write a Program to read and print a structure.
#include <stdio.h>

int main()
{
    struct coustomar{
        char name[80];
        double acn;
        long balanc;
    }c;


    printf("Enter Name: ");
    gets(c.name);
    printf("Enter Account no: ");
    scanf("%lf", &c.acn);
    printf("Enter your balance: ");
    scanf("%ld", &c.balanc);


    printf("\n");
    printf("%s\n", c.name);
    printf("Account No: %0.0lf\n", c.acn);
    printf("Balance: %ld\n", c.balanc);

    return 0;
}

