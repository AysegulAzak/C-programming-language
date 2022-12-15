#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float centimeter, length, feet, fixed_number;
	fixed_number=30.48;
	
	printf("length:");
	scanf("%f", &length);
	
	centimeter=(feet*fixed_number);
	printf("centimeter:%f", centimeter);
	
	return 0;
}
