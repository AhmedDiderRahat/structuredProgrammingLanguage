//Write a Program to read and print a structure array.
#include <stdio.h>

int main()
{
    int i;

    struct student {
        char name[80];
        double id;
        int sem;
        char dept[10];
    }s[3];

    for(i = 0; i  < 3; i++){
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Id no: ");
        scanf("%lf", &s[i].id);
        printf("Enter your semester: ");
        scanf("%d", &s[i].sem);
        printf("Enter your department: ");
        scanf("%s", s[i].dept);
        printf("\n");
    }

    for(i = 0; i < 3; ++i){
        printf("\n");
        printf("%s\n", s[i].name);
        printf("Id no: %0.0lf\n", s[i].id);
        printf("Semester: %d\n", s[i].sem);
        printf("Department of %s\n", s[i].dept);
    }


    return 0;
}
