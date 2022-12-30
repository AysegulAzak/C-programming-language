#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n;
	printf("n:");
	scanf("%d", &n);
	
	float sum;
	for(i=1; i<=n; i++) {
		sum=sum+((float)1/(float)i); 
	}
    printf("sum %f", sum);
    
	return 0;
}
