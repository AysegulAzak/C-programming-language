#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, n;
	
	printf("n:");
	scanf("%d", &n);
	
	for(i=1; i<n; i++) {
		int sum=0, j;
		for(j=1; j<i; j++) {
			if(i%j==0) {
				sum=sum+j;
			}	
		}
		if(sum==i) {
			printf("%d\n", sum);
		}
	}
	getch();
	return 0;
}
