//Write a Program to read and print a structure.
#include <stdio.h>

int main()
{
    struct votar{
        char name[80];
        char f_name[80];
        char m_name[80];
        char add[80];
        double id;
        char dob[15];
        char bg[5];
    }c;

    printf("Enter Name: ");
    scanf("%s", c.name);
    printf("\nEnter Father Name: ");
    scanf("%s", c.f_name);
    printf("\nEnter Mother Name: ");
    scanf("%s", c.m_name);
    printf("\nEnter Address: ");
    scanf("%s", c.add);
    printf("\nEnter National id Number: ");
    scanf("%lf", &c.id);
    printf("\nEnter Date of Birth: ");
    scanf("%s", c.dob);
    printf("\nEnter Blood Group: ");
    scanf("%s", c.bg);


    printf("\n");
    printf("Name: %s", c.name);
    printf("\n");
    printf("Father's Name:%s", c.f_name);
    printf("\n");
    printf("Mother's Name: %s", c.m_name);
    printf("\n");
    printf("Address: %s", c.add);
    printf("\n");
    printf("National id Number: %0.0lf", c.id);
    printf("\n");
    printf("Date of Birth: %s", c.dob);
    printf("\n");
    printf("Blood Group: %s", c.bg);
    printf("\n");

    return 0;
}

