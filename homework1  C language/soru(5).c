#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float celsius, derece; 
	
	printf("derece:");
	scanf("%f", &derece);
	
	celsius=((derece-32)*5/9);
	printf("celsius:%f", celsius);
	
	return 0;
}
