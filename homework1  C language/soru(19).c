#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, m;
	printf("n:");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++)
	{
		m=n*i;
	    printf("\n%d", m);
	}
	return 0;
}
