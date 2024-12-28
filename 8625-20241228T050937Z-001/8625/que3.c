#include <stdio.h>

void main() 
{
    int n, i, a[10];
    int sum = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++) 
    {
        printf("array[%d]",i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) 
    {
        if (a[i] > 0) 
        {
            sum += a[i];
        }
    }

    printf("The sum of all positive values in the array is: %d\n", sum);

}


    