//Write a Program that calculate sum of 1 to n using function (Recursion).
#include <Stdio.h>
int sum(int n);

int main()
{
    int n, s;

    printf("Enter a number: ");
    scanf("%d", &n);

    s = sum(n);

    printf("Sum = %d\n", s);

    return 0;
}

int sum(int n)
{
    if(n == 0){
        return 0;
     }
    else{
        return n + sum(n - 1);
     }
}
