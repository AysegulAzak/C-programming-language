#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int kuvvet, taban, sonuc =1;
	
	printf("taban:");
	scanf("%d", &taban);
	printf("kuvvet:");
	scanf("%d", &kuvvet);
	
	int i=0;
	for(i=0; i<kuvvet; i++) {
		sonuc=sonuc*taban;
	}
	printf("%d uzeri %d = %d", taban, kuvvet, sonuc);
	return 0;
}
