#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, i, hcf;
	printf("a:");
	scanf("%d", &a);
	
	printf("b:");
	scanf("%d", &b);
	
	for(i=1; i<=a && i<=b; i++) {
		 if(a%i==0 && b%i==0)
		    hcf=i;
	}
	printf("highest common factor of : %d", hcf);
	return 0;
}
