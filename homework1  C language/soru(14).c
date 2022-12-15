#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, F=1;
	
	printf("n:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) 
	{
		F=F*i;
    } 
    printf("%d !=%d", n, F);
	
	return 0;
}
