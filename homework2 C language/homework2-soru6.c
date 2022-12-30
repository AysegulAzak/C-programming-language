#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi1, sayi2, max;
	printf("iki sayi giriniz:");
	scanf("%d %d", &sayi1, &sayi2);
	
	max=(sayi1>sayi2) ? sayi1:sayi2;
	while(max%sayi1!=0 || max%sayi2!=0){
		max++;
	}
	printf("%d %d LCM:%d", sayi1, sayi2, max);
	return 0;
}
