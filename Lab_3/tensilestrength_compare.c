#include <stdio.h>

int main (void) {
  //getting tensile strength of matetrial 1
float tensile_stren_1, tensile_stren_2;
printf(" Tensile strength of material 1:  ");
scanf("%f", &tensile_stren_1);

//getting tensile strength of material 2
printf("Tensile strength of material 2: ");
scanf("%f", &tensile_stren_2);

//comparing tensile streangth
if(tensile_stren_1 > tensile_stren_2)
  printf("Material 1 is more tensile than material 2.");
else if(tensile_sren_1 < tensile_stren_2)
  pritnf("Material 2 is more tensile than material 1.);
else 
    printf("Both material have same tensile strength");
// ending the program 
return 0;
}
