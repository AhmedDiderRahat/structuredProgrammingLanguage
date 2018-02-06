//Write a Program to read and print a nested structure.
#include <stdio.h>

int main()
{
    int i;

    struct date{
        int day;
        int month;
        int year;
    };

    struct coustomar{
        char name[80];
        double acn;
        long balanc;
        struct date lpd;
    }c[3];

    for(i = 0; i < 3; i++){
        printf("Enter Name: ");
        scanf("%s", c[i].name);
        printf("Enter Account no: ");
        scanf("%lf", &c[i].acn);
        printf("Enter your balance: ");
        scanf("%ld", &c[i].balanc);
        printf("Enter last payment date: ");
        scanf("%d", &c[i].lpd.day);
        printf("Month: ");
        scanf("%d", &c[i].lpd.month);
        printf("Year: ");
        scanf("%d", &c[i].lpd.year);
        printf("\n");

    }

    printf("\n");

    for(i = 0; i < 3; i++){
        printf("%s\n", c[i].name);
        printf("Account No: %0.0lf\n", c[i].acn);
        printf("Balance: %ld\n", c[i].balanc);
        printf("Last Payment Date: %d/%d/%d", c[i].lpd.day, c[i].lpd.month, c[i].lpd.year);
        printf("\n");
    }

    return 0;
}
