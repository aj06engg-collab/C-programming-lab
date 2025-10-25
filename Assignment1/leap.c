
/** Write a C program to check whether a given year is leap year or not.*/
#include <stdio.h>

int main(void)
{
    // getting the year as input
    printf("Year: ");
    int year;
    scanf("%d", &year);
    
    // check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    
    
    return 0;
}
