#include <stdio.h>

int main (void) {
  //taking mass as input
float mass = 0.0;
printf("Mass*(kg): ");
scanf("%f", &mass);

//taking acceleration as input
float acceleration = 0.0;
printf("Acceleration(m/s2): ");
scanf("%f", &acceleration);

//calculating force
float force = mass * acceleration;

//printing the force
printf(Force: %2fN\n", force);

//ending the program
return 0;
}
  
