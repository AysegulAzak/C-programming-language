#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, sum=0, i, r;
	
	printf("n:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		i=n%10;
		n=n/10;
	    sum=sum+(i*i*i);
	    sum++;
	}
	printf("%d sum", sum);
	return 0;
}
