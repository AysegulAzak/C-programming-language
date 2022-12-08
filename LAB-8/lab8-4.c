#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sicaklik;
	printf("sicaklik:");
	scanf("%d", &sicaklik);
	
    if(sicaklik<=0) 
		printf("%d donma noktasi altinda", sicaklik);
	else
	    printf("%d donma noktasi uzerinde", sicaklik);	
	return 0;
}
