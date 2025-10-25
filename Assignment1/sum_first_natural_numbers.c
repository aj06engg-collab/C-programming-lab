
/**Write a C program to input a number n and calculate the sum of the first
 * n natural numbers.*/

#include <stdio.h>

int main(void)
{
    // getting the input
    printf("n: ");
    int n;
    scanf("%d", &n);
    
    // calculating the sum
    float sum = (n * (n + 1)) / 2;
    
    // printing the sum
    printf("Sum of first %d natural numbers: %.0f\n", n, sum);
    
    return 0;
}
