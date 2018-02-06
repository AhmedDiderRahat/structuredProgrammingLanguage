//Write a Program to read and print a structure.
#include <stdio.h>

int main()
{
    struct student {
        char name[80];
        double id;
        int sem;
        char dept[10];
    }s;

    printf("Enter Name: ");
    gets(s.name);
    printf("Enter Id no: ");
    scanf("%lf", &s.id);
    printf("Enter your semester: ");
    scanf("%d", &s.sem);
    printf("Enter your department: ");
    scanf("%s", s.dept);


    printf("\n");
    printf("%s\n", s.name);
    printf("Id no: %0.0lf\n", s.id);
    printf("Semester: %d\n", s.sem);
    printf("Department of %s\n", s.dept);

    return 0;
}
