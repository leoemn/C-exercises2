/*Write a C program to find the nth Fibonacci number using recursion.*/
#include <stdio.h>

//Functions prototype.
int FibonacciNumber (int num);

int main(void)
{
    int num, result;
    do
    {
        printf("Enter a number to find the fibonacci number: ");
        scanf("%d", &num);
    } while (num < 0); //Repeat untill positive number is entered.

    result = FibonacciNumber(num);
    printf("%dth Fibonacci number is %d", num, result);
}

int FibonacciNumber (int num)
{
    if (num == 0) //First base case.
    {
        return 0;
    }
    else if (num == 1) //Second base case.
    {
        return 1;
    }
    else
    {
        return FibonacciNumber(num - 1) + FibonacciNumber(num - 2); //Recursive call to calculate nth fibonacci number.
    }
}
