#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, sum=0, i;
	printf("n:");
	scanf("%d", &n); 
	for(i=1; i<n; i++) {
		if(n%i==0)
		sum=sum+i;
	}
	if(n==sum) {
		printf("%d mukemmel sayi\n", n);
	}
    else{	
		printf("%d mukemmel sayi degil\n", n);		
	}
	return 0;
}
