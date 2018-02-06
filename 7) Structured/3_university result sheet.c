//Write a Program to read and print a structure.
#include <stdio.h>

int main()
{
    struct course{
        char subject[80];
        float credit;
        float gpa;
    }c;

    printf("Enter Course name: ");
    scanf("%s", c.subject);
    printf("Enter credit point: ");
    scanf("%f", &c.credit);
    printf("Enter GPA: ");
    scanf("%f", &c.gpa);

    printf("\nCourse: %s \t", c.subject);
    printf("Credit: %0.1f \t", c.credit);
    printf("GPA: %0.1f \n", c.gpa );

    return 0;
}


