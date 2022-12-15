#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi;
	printf("sayi:");
	scanf("%d", &sayi);
	
	if(sayi%2==0)
	     printf("\n%d cift sayidir.", sayi);
	else
	     printf("\n%d tek sayidir.", sayi);      

	return 0;
}
