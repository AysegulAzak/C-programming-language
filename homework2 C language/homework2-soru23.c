#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi, temp, i=1, ikilik[100];
	
	printf("sayi:");
	scanf("%d", &sayi);
	
	temp=sayi;
	while(temp!=0) {
		ikilik[i]= temp%2;
		temp=temp/2;
		i++;
	}
	printf("%d ikilik sistemde karsiligi:", sayi);
	int j;
	for(j=i-1; j>0; j--) {
		printf("%d", ikilik[j]);
	}
	return 0;
}
