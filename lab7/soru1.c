#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi1,sayi2,toplam;
	printf("sayi1:");
	scanf("%d", &sayi1);
	
	printf("sayi2:");
	scanf("%d", &sayi2);
	
	toplam=(sayi1+sayi2);
	
	printf("toplam:%d",toplam);
	
    return 0;
}
