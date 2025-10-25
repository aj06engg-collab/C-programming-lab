
/**Write a C program to input a number and check whether it is divisible by both 5
 * and 11 or not*/
 
#include <stdio.h>

int main(void)
{
    // getting the number as input
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // checking the divisibility by 5 and 11
    if (n % 5 == 0 && n % 11 == 0)
        printf("Divisible by both 5 and 11\n");
    else
        printf("%d is not divisible\n", n);
    
    return 0;
}
