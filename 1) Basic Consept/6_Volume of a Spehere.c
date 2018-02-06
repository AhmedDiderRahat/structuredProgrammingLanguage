//write a program to find the Volume of The Sphere
#include <stdio.h>
#define PI 3.1416

int main()
{
    float r, s;

    printf("Enter The Radius of the Sphere: ");
    scanf("%f", &r);

    s = ((4 / 3.0) * PI * r * r *r);

    printf("\nThe Volume of The Sphere is: %0.3f\n\n", s);

    getch();

    return 0;
}
