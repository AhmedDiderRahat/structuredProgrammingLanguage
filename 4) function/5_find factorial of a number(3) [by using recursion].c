//Write a Program that calculate factorial of a number using function (Recursion).
#include <Stdio.h>

int fact(int n);

int main()
{
    int n, f;

    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);

    printf("\nFactorial of %d is %d\n", n, f);

}

int fact(int n)
{
    if(n == 1){
        return 1;
     }
    else{
        return n * fact(n - 1);
    }
}
