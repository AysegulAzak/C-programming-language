#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, start;
	printf("n:");
	scanf("%d", &start);
	
    for(n=start; n>=1; n--){
    	printf("\n%d", n);
    }
	return 0;
}
