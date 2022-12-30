#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, s=1, k, j ;
	
	printf("n:");
	scanf("%d", &n);
	
	for(j=1; j<=n; j++) 
	{
		for(k=1; k<=j; k++)
		{
			printf("%d", s);
			s++;
		}
		printf(" \n");
	}
	
	return 0;
}
