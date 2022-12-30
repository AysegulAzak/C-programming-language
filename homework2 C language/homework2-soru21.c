#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
	int n, i, j=1, sum=0;
	printf("n:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		sum=sum+j;
		j=(j*10)+1;
	}
	printf("%d", sum);
	
	return 0;
}
