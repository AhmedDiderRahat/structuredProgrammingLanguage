//Write a Program to read and print a structure array.
#include <stdio.h>

int main()
{
    int i;

    struct course{
        char subject[80];
        float credit;
        float gpa;
    }c[3];

    for(i = 0; i < 3; i++){
        printf("Enter Course name: ");
        scanf("%s", c[i].subject);
        printf("Enter credit point: ");
        scanf("%f", &c[i].credit);
        printf("Enter GPA: ");
        scanf("%f", &c[i].gpa);
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        printf("\nCourse: %s \n", c[i].subject);
        printf("Credit: %0.1f \n", c[i].credit);
        printf("GPA: %0.1f \n", c[i].gpa );
    }

    return 0;
}
