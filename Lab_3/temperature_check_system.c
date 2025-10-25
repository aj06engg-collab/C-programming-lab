#include <stdio.h>

int main(void) {
    // getting the room temperature
    float temp = 0.0;
    printf("Current Temperature(C): ");
    scanf("%f", &temp);
    
    // creating the warning
    if (temp > 60 && temp <= 82)
        printf("Temperature is safe\n");
    else
        printf("Temperature warning!\n");
        
    // ending the program
    return 0;
}
