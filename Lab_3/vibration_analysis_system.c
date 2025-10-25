
#include <stdio.h>

int main(void) {
    // getting vibrational amplitude as input
    float amplitude = 0.0;
    printf("Vibrational Amplitude(mm): ");
    scanf("%f", &amplitude);
    
    // getting the frequency as input
    float frequency = 0.0;
    printf("Frequency(Hz): ");
    scanf("%f", &frequency);
    
    // analysing the frequency and amplitude provided
    if (amplitude > 0.5 && (frequency >= 20 && frequency <= 50))
        printf("High Risk\n");
    else if (amplitude > 0.5 && frequency > 60)
        printf("Medium Risk\n");
    else
        printf("Low Risk\n");
    
        
    // ending the program
    return 0;
}
