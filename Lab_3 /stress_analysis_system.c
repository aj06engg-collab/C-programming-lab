#include <stdio.h>

int main(void) {
    // getting applied stress as input
    float apply_stress;
    printf("Applied Stress(MPa): ");
    scanf("%f", &apply_stress);
    
    // getting material yield strength as input
    float material_yield_stren;
    printf("Material Yield Strength(MPa): ");
    scanf("%f", &material_yield_stren);
    
    // calculating factor of safety
    float fos = material_yield_stren / apply_stress;
    
    // checking safety parameters
    if (fos >= 2.0)
        printf("Safe design\n");
    else if (fos >= 1.5 && fos < 2.0)
        printf("Acceptable with monitoring\n");
    else
        printf("Danger - redesign needed\n");
        
    // ending the program
    return 0;
}
