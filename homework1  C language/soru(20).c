#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, count=0;
	printf("n:");
	scanf("%d", &n);
	{
	    n=n/10;       
		count++;
   	}
   	(n!=0);
   	printf("number of digits: %d", count);
	return 0;
}
