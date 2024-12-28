#include <stdio.h>

 factorial(int n) 
{
    if (n < 0) 
    {
        return 0;
    }
    
     result = 1;

    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;
    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    

     fact = factorial(number);
    
    
    if (number < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial of %d is %f\n", number, fact);
    }
    
    return 0;
}