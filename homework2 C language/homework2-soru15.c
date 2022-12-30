#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, tersi, i;
	int toplam=0;
	
	printf("n:");
	scanf("%d", &n);
	tersi=n;
	
	while(n>0){
	   	i=n%10;
	   	toplam=(toplam*10)+i;
	   	n=n/10;
	}	
    if(tersi==toplam)
    	printf("palindrom sayi");
    else 
	    printf("palindrom sayi degil");	
	
	return 0;
}
