//write a program to find the area of circle and the volume of a cylinder
#include <stdio.h>
#define PI 3.1416

int main()
{
    double a, b, r, h;

    r = 10;
    h = 15;

    a = PI * r * r; //a = area of a circle

    b =  (PI * r * r * h);  //b = volume  of  a  Cylinder.

    printf("Area of a Circle: %0.2lf \nVolume of a Cylinder: %0.2lf\n\n", a, b);

    getch();

    return 0;
}
