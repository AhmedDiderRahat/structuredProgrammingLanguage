//Write a Program that manage the balance of an account.
#include <stdio.h>

void deposit();
void withdraw();
void inquary();
float bl;

main()
{
    int n;

    printf("Enter initial balance: ");
    scanf("%f", &bl);

    printf("\nEnter 1 for deposit, 2 for withdraw and 3 for inquary: ");
    scanf("%d", &n);

    if(n == 1){
        deposit();
    }

    else if(n == 2){
        withdraw();
    }

    else if(n == 3){
        inquary();
    }

    else{
        printf("\nError, enter your data again\n");
    }
}

void deposit()
{
    float amount;

    printf("\nEnter the amount u want to deposit: ");
    scanf("%f", &amount);

    bl = bl + amount;

    printf("\nYour current balance is: %0.2f", bl);

    printf("\n");
}

void withdraw()
{
    float amount;

    printf("\nEnter the amount u want to withdraw: ");
    scanf("%f", &amount);

    bl = bl - amount;
    printf("\nYour current balance is: %0.2f", bl);

    printf("\n");
}

void inquary()
{
    printf("\nYour current balance is %0.2f\n", bl);

    printf("\n");
}
