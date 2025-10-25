/** Write a C program to calculate the electricity bill based on the criterion*/
#include <stdio.h>

int main(void)
{
    // getting the user electricity units
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    // calculating the bill
    float bill = 0.0;
    if (units <= 100)
        bill = 1.5 * units;
    else if (units <= 200)
        bill = 2 * (units - 100) + 1.5 * 100;
    else if (units <= 300)
        bill = 3 * (units - 200) + 2 * 100 + 1.5 * 100;
    else
        bill = 5 * (units - 300) + 3 * 100 + 2 * 100 + 1.5 * 100;
    
    
    // printing the final bill
    printf("Total Bill: ₹%.2f\n", bill);
}
