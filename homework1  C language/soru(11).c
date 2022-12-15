#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int toplam=0, carpim=1, i, sayi[10];
	
    for(i=1; i<=10; i++) {
		printf("sayi:");	       
		scanf("%d", &sayi[i]);
    }	
    for(i=1; i<=10; i++){
   	    toplam=toplam+sayi[i];
    }
    for(i=1; i<=10; i++){
    	carpim=carpim*sayi[i];
	}
  	printf("girilen sayilarin toplami: %d", toplam);
  	printf("girilen sayilarin carpimi: %d", carpim);
	return 0;
}
