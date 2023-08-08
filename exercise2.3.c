/*Write a C program to find the prime factors of a given number and display them.*/

#include <stdio.h>

//Function Prototypes
void findPrimeFactors(int n);

int main(void)
{
    int num;

    do
    {
        printf("Enter number: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    printf("Prime factors of %d are: ", num);
    findPrimeFactors(num);
}

void findPrimeFactors(int n) 
{
    int divisor = 2; //Start with the smallest prime divisor

    while (n > 1) 
    {
        if (n % divisor == 0) //Check if divisor divides evenly
        { 
            printf("%d ", divisor);
            n /= divisor; //Divide n by the divisor
        } 
        else 
        {
            divisor++; //Move to the next divisor
        }
    }
}