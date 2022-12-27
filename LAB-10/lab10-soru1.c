#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	float n[8], toplam, ortalama;

	for(i=0; i<8; i++)
	{
		printf("%d sayi:", i+1);
		scanf("%f", &n[i]);
		toplam=toplam+n[i];
	}
	ortalama=toplam/8;
	printf("ortalama:%f", ortalama);
	
	
	return 0;
}
