#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, sum=0;
	
	for(n=1000; n<=2000; n=n+2){
		printf("\n%d", n);
		sum+=n;
    }
	printf("\n sum:%d", sum);
	return 0;
}
