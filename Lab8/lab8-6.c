#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float cm, feet, length;
	printf("length:");
	scanf("%f", & length);
	
	cm=(length*30.48);
	printf("cm:%f feet", cm);
	
	return 0;
}
