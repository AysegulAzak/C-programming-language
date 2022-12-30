#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float sum, x, a;
    int i, terimSayisi;
    
    printf("x:");
    scanf("%f", &x);
    printf("terimSayisi:");
    scanf("%d", &terimSayisi);
    
    sum=1; a=1;
    for(i=1; i<terimSayisi; i++){
	    a=a*x/(float)i;
	    sum=sum+a;
	}
    printf("\n sum: %f\n", sum);
    
	return 0;
}
