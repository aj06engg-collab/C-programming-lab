
/**Write a C program to input three numbers and determine which one is the largest.*/
#include <stdio.h>

int main(void)
{
	// getting the user input
	int x, y, z;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	printf("z: ");
	scanf("%d", &z);

	// doing the comparison
	if (x > y && x > z)
		printf("%d is largest\n", x);
	else if (y > x && y > z)
		printf("%d is largest\n", y);
	else if (z > x && z > y)
		printf("%d is largest\n", z);
	else
		printf("All are equal\n");
}
