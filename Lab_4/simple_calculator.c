
#include <stdio.h>

int main(void) {
	// getting the user input
	float x, y;

	// getting x
	printf("Enter the first number: ");
	scanf("%f", &x);

	// getting y
	printf("Enter the second number: ");
	scanf("%f", &y);
    
	// getting the mode of operation
	printf("Choose from the list of operators,\n");
	printf("1 for addition\n");
	printf("2 for substraction\n");
	printf("3 for multiplication\n");
	printf("4 for division\n");
	printf("operator: ");
	int operator;
	scanf("%d", &operator);

	// performing the operation
	float value = 0.0;
	switch(operator) {
	case 1:
		value = x + y;
		printf("Sum of 2 numbers is %.2f\n", value);
		break;
	case 2:
		value = (x > y) ? x - y : y - x;
		printf("Difference of 2 numbers is %.2f\n", value);
		break;
	case 3:
		value = x * y;
		printf("Product of 2 numbers is %.2f\n", value);
		break;
	case 4:
		value = x / y;
		printf("Quotient of 2 numbers is %.2f\n", value);
		break;
	default:
		printf("Error: incorrect mode of operation\n");
		return 1;
	}

	return 0;
}
