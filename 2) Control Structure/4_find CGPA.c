//Write A Program to calculate your grade letter form marks
#include <stdio.h>

int main()
{
    int n;

    printf("Enter your Marks: ");
    scanf("%d", &n);

    if(n >= 80){
        printf("A+");
    }
    else if(n >= 75){
    printf("A");
    }
    else if(n >= 70){
        printf("A-");
    }
    else if(n >= 65){
        printf("B+");
    }
    else if(n >= 60){
        printf("B");
    }
    else if(n >= 55){
        printf("B-");
    }
    else if(n >= 50){
        printf("C+");
    }
    else if(n >= 45){
        printf("C");
    }
    else if(n >= 40){
        printf("D");
    }
    else {
        printf("F");
    }

    return 0;
}
